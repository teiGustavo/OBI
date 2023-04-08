#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numLinhas, forcaErupcao, count, x;
string m;
vector <string> mapa;
vector <vector <int>> matriz;

int main()
{
    cin >> numLinhas >> forcaErupcao;

    while (count < numLinhas) {
        cin >> m;
        
        

        matriz.at(count).push_back(1);
        count++;
    }

    for (int i=0; i<numLinhas; i++) 
        for (int j=0; j<numLinhas; j++)
            cout << matriz.at(i).at(j) << endl;

    return 0;
}