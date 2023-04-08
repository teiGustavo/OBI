#include<iostream>
using namespace std;

int aux, idades[3];

int main()
{
    cin >> idades[0] >> idades[1] >> idades[2];

    for (int a=0; a<3; a++) {
        for (int i=0; i<2; i++) {
            if (idades[i] > idades[i+1]) {
                aux = idades[i];
                idades[i] = idades[i+1];
                idades[i+1] = aux;
            }
        }
    }

    cout << idades[1] << endl;
    return 0;
}