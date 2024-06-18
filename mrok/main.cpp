#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

struct Point {
    int node;
    int x, y;
    bool isVisited = false;
    vector<pair<int, int>> neighbours;
};

struct Queue {
    int node;
    int weight;

    Queue(int node, int weight) {
        this->node = node;
        this->weight = weight;
    }

    bool operator<(const Queue &other) const {
        return weight > other.weight;
    }
};

bool comparatorX(const Point &a, const Point &b) {
    return a.x < b.x;
}

bool comparatorY(const Point &a, const Point &b) {
    return a.y < b.y;
}

bool comparatorNode(const Point &a, const Point &b) {
    return a.node < b.node;
}

void dijkstra(vector<Point> &nodeList, priority_queue<Queue> &queue, vector<int> &distance, int destination) {
    while (!queue.empty()) {
        int current_node = queue.top().node;
        int current_weight = queue.top().weight;
        queue.pop();

        if(current_weight > distance[current_node]) {
            continue;
        }
        nodeList[current_node].isVisited = true;

        if (current_node == destination) {
            cout << distance[current_node];
            return;
        }

        for (auto &element: nodeList[current_node].neighbours) {
            int tempNode = element.first;
            int tempWeight = element.second;

            if (distance[tempNode] > distance[current_node] + tempWeight) {
                distance[tempNode] = distance[current_node] + tempWeight;
                queue.emplace(tempNode, distance[tempNode]);
            }
        }
    }
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    vector<Point> nodeList(n);

    for (int i = 0; i < n; ++i) {
        int tempX, tempY;
        cin >> tempX >> tempY;
        cin.ignore();

        nodeList[i].node = i;
        nodeList[i].x = tempX;
        nodeList[i].y = tempY;
    }

    int start, destination;
    cin >> start >> destination;
    cin.ignore();

    sort(nodeList.begin(), nodeList.end(), comparatorX);
    for (int i = 0; i < n; ++i) {
        if (i + 1 < n) {
            int tempWeight = nodeList[i + 1].x - nodeList[i].x;
            nodeList[i].neighbours.push_back(make_pair(nodeList[i + 1].node, tempWeight));
        }
        if (i > 0) {
            int tempWeight = nodeList[i].x - nodeList[i - 1].x;
            nodeList[i].neighbours.push_back(make_pair(nodeList[i - 1].node, tempWeight));
        }
    }

    sort(nodeList.begin(), nodeList.end(), comparatorY);
    for (int i = 0; i < n; ++i) {
        if (i + 1 < n) {
            int tempWeight = nodeList[i + 1].y - nodeList[i].y;
            nodeList[i].neighbours.push_back(make_pair(nodeList[i + 1].node, tempWeight));
        }
        if (i > 0) {
            int tempWeight = nodeList[i].y - nodeList[i - 1].y;
            nodeList[i].neighbours.push_back(make_pair(nodeList[i - 1].node, tempWeight));
        }
    }

    sort(nodeList.begin(), nodeList.end(), comparatorNode);
    
    priority_queue<Queue> queue;
    queue.emplace(nodeList[start].node, 0);

    vector<int> distance(nodeList.size(), 2147483647);
    distance[start]=0;

    dijkstra(nodeList, queue, distance, destination);

    return 0;
}