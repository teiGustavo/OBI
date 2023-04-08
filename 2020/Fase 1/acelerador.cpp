#include<iostream>
#include <cmath>
using namespace std;

int distancia, sensor;

int main()
{
    cin >> distancia;

    distancia -= 3;

    if (distancia == 3)
        sensor = 1;
    else if (distancia == 4)
        sensor = 2;
    else if (distancia == 5)
        sensor = 3;
    else
        while (distancia >= 0) {
            distancia -= 8;

            if (distancia == 3) {
                sensor = 1;
                break;
            } else if (distancia == 4) {
                sensor = 2;
                break;
            } else if (distancia == 5) {
                sensor = 3;
                break;
            }
        }
  
    cout << sensor << endl;
    return 0;
}