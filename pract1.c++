#include <iostream>
#include <cstdlib>
using namespace std;
    int main(){
        system("chcp 1251 > nul");
        const double kmInMIle = 1.609344;
        double distMile, distKm;
        cout << "Укажите расстояние в милях: ";
        cin >> distMile;
        distKm = distMile * kmInMIle;
        cout << "Расстояние (в км): "<< distKm <<endl;
        system("pause > nul");
        return 0;
    }