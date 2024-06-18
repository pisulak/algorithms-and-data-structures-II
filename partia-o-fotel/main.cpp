#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>

using namespace std;

struct Point{
    bool beenVisited=false;
    vector<pair<int,double>> adjacentPoints;
};

struct QueueStruct{
    int pointNode;
    double survivalProbability;

    QueueStruct(int pointNode, double survivalProbability){
        this->pointNode=pointNode;
        this->survivalProbability=survivalProbability;
    }

    bool operator<(const QueueStruct& other) const{
        return survivalProbability<other.survivalProbability;
    }
};

void goThroughQueue(Point pointList[], priority_queue<QueueStruct> &queue, double &result){
    while(!queue.empty()){
        int currentNode=queue.top().pointNode;
        double currentProbability=queue.top().survivalProbability;
        queue.pop();

        if(!pointList[currentNode].beenVisited){
            pointList[currentNode].beenVisited=true;
            result*=currentProbability;
            for(auto& adjacent : pointList[currentNode].adjacentPoints){
                int tempNode=adjacent.first;
                double tempProbability=adjacent.second;
                if(!pointList[tempNode].beenVisited){
                    queue.emplace(tempNode, tempProbability);
                }
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;
    cin>>n>>m;
    cin.ignore();

    Point pointList[n];

    for(int i=0; i<m; ++i){
        int a, b;
        double x;
        cin>>a>>b>>x;
        cin.ignore();

        pointList[a].adjacentPoints.push_back(make_pair(b, x));
        pointList[b].adjacentPoints.push_back(make_pair(a, x));
    }

    double result=1;

    priority_queue<QueueStruct> queue;
    queue.emplace(0,1);
    goThroughQueue(pointList, queue, result);

    cout<<fixed<<setprecision(5)<<result;

    return 0;
}