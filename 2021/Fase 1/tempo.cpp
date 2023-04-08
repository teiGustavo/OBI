#include<iostream>
using namespace std;

int numRegistros, e, x, amigo;
string evento;

int main()
{
    cin >> numRegistros;

    int amigos[100], tempo[numRegistros], t[100];

    while (e < numRegistros)
    {
        cin >> evento;
        cin >> x;

        if (evento == "R") {
            amigos[x] = x;
            amigo = x;
        }

        if (evento == "T") {
            tempo[amigo] = x;
        }

        if (evento == "E") {
            t[x] = tempo[amigo];
        }

        tempo[amigo] += 1;

        e++;
    }

    int tam = sizeof(amigos);

    for (int i=0; i<tam; i++) {
        if (amigos[i] != 0) {
            cout << amigos[i]  << " " << t[i] << endl;
        }
    }

    return 0;
}