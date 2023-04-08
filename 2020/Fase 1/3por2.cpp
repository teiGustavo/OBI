#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numChocolates, menorPreco, contador, x;
vector <int> preco;

int main()
{
    cin >> numChocolates ;

    while (contador < numChocolates) {
        cin >> x;
        preco.push_back(x);
        contador++;
    }

    sort(preco.rbegin(), preco.rend());

    contador = 0;
    while (contador < numChocolates) {
        menorPreco += preco.at(contador);

        if ((contador + 1) % 3 == 0)
            menorPreco -= preco.at(contador);

        contador++;
    }

    cout << menorPreco << endl;
    return 0;
}