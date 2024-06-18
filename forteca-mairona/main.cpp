#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

struct ListItem {
    float distance;
    double angle;
    pair<double, double> coordinates;
};

bool comparator(const ListItem &a, const ListItem &b) {
    if (a.angle == b.angle)
        return a.distance < b.distance;
    return a.angle < b.angle;
}

double check(const ListItem& O, const ListItem& A, const ListItem& B) {
    return (A.coordinates.first - O.coordinates.first) * (B.coordinates.second - O.coordinates.second) - 
           (A.coordinates.second - O.coordinates.second) * (B.coordinates.first - O.coordinates.first);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    vector<ListItem> list(n);
    double minX = 1000000000, minY = 1000000000;
    int minIndex = 0;

    for (int i = 0; i < n; ++i) {
        double tempX, tempY;
        cin >> tempX >> tempY;
        cin.ignore();
        list[i].coordinates = make_pair(tempX, tempY);

        if (tempY < minY || (tempY == minY && tempX < minX)) {
            minY = tempY;
            minX = tempX;
            minIndex = i;
        }
    }

    double startX = list[minIndex].coordinates.first;
    double startY = list[minIndex].coordinates.second;
    for (int i = 0; i < n; ++i) {
        double tempX = list[i].coordinates.first;
        double tempY = list[i].coordinates.second;
        list[i].angle = atan2(tempY - startY, tempX - startX);
        list[i].distance = pow(tempX - startX, 2) + pow(tempY - startY, 2);
    }

    sort(list.begin(), list.end(), comparator);

    stack<ListItem> stack;
    stack.push(list[0]);
    stack.push(list[1]);

    for (int i = 2; i < n; ++i) {
        while (stack.size() > 1) {
            ListItem top = stack.top();
            stack.pop();
            ListItem next_to_top = stack.top();
            if (check(next_to_top, top, list[i]) > 0) {
                stack.push(top);
                break;
            }
        }
        stack.push(list[i]);
    }

    vector<pair<double, double> > borderPoints;
    while (!stack.empty()) {
        borderPoints.push_back(stack.top().coordinates);
        stack.pop();
    }
    reverse(borderPoints.begin(), borderPoints.end());

    double totalArea = 0.0;
    pair<double, double> firstPoint = borderPoints[0];
    for (size_t i = 1; i < borderPoints.size() - 1; ++i) {
        double Ax = firstPoint.first, Ay = firstPoint.second;
        double Bx = borderPoints[i].first, By = borderPoints[i].second;
        double Cx = borderPoints[i + 1].first, Cy = borderPoints[i + 1].second;

        double area = fabs((Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By)) / 2.0);
        totalArea += area;
    }

    cout << fixed << setprecision(3) << totalArea << endl;

    return 0;
}