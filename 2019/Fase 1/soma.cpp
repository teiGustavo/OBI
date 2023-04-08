#include <bits/stdc++.h>
using namespace std;

int numQuadrados, somaDesejada, qtd, somaUlt;

int main() 
{
    cin >> numQuadrados >> somaDesejada;

    int quadrados[numQuadrados];

    for (int i=0; i<numQuadrados; i++)
        cin >> quadrados[i];
    
    for (int i=0; i<numQuadrados; i++) {
        somaUlt = 0;

        if (quadrados[i] > somaDesejada)
            continue;

        cout << quadrados[i] << endl;

        if (quadrados[i] == somaDesejada)
            qtd++;

        for (int j=i+1; j<numQuadrados; j++) {
            if (somaUlt > somaDesejada)
                break;

            if ((quadrados[i] + quadrados[j] + somaUlt) == somaDesejada) {
                qtd++;
            }
            
            somaUlt += quadrados[j];
        }
    }

    cout << qtd << endl;

    return 0;
}