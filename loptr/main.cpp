#include <iostream>
#include <iomanip>
#include <random>
#include <sstream>
#include <string>

using namespace std;

// int Loptr(int HH, int mm) {
//     if (HH >= 8 && HH < 15) return 0;
//     else if (HH >= 15 && HH < 22) return 1;
//     return 2;
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string time1, time2, segment;
    getline(cin, time1);
    getline(cin, time2);
    int destination;
    cin >> destination;

    int hh1, hh2, mm1, mm2;
    int i = 0;
    stringstream ss1(time1);
    while(getline(ss1, segment, ':')) {
        if(i == 0) {
            hh1 = stoi(segment);
            ++i;
        } else {
            mm1 = stoi(segment);
        }
    }
    i = 0;
    stringstream ss2(time2);
    while(getline(ss2, segment, ':')) {
        if(i == 0) {
            hh2 = stoi(segment);
            ++i;
        } else {
            mm2 = stoi(segment);
        }
    }

    int num_simulations = 100000;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(hh1 * 60 + mm1, hh2 * 60 + mm2);

    int successful_hits = 0;
    for (int i = 0; i < num_simulations; ++i) {
        int total_minutes = dist(gen);
        int HH = total_minutes / 60;
        int mm = total_minutes % 60;

        if (Loptr(HH, mm) == destination) {
            successful_hits++;
        }
    }

    double probability = static_cast<double>(successful_hits) / num_simulations;
    cout << fixed << setprecision(2) << probability << endl;

    return 0;
}