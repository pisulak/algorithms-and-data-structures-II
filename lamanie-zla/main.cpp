#include <iostream>
#include <cmath>

using namespace std;

//double butelka(double cm) {
//    return 10 - (cm - 2) * (cm - 2);
//}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    cin.ignore();
    int Va = x * y * z;

    double p;
    cin >> p;
    cin.ignore();
    int Vw = Va * p;

    int n;
    cin >> n;
    cin.ignore();

    double iteracje = 0.001;
    bool over=false;

    for (int i = 1; i <= n; ++i) {
        double tempButelka, Vb = 0;
        cin >> tempButelka;
        for (double j = 0; j <= tempButelka; j += iteracje) {
            Vb += pow(butelka(j),2) * iteracje * M_PI;
        }
        Vw+=Vb;
        if(Vw>Va){
            cout<<i;
            over=true;
            break;
        }
    }

    if(!over){
        cout<<"NIE";
    }

    return 0;
}