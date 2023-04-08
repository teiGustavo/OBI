#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int monica, soma, filho1, filho2, filho3;
vector <int> filhos;

int main() 
{
    cin >> monica >> filho1 >> filho2;

    filhos.push_back(filho1);
    filhos.push_back(filho2);

    soma = filhos.at(0) + filhos.at(1);
    filho3 = monica - soma;

    filhos.push_back(filho3);

    sort(filhos.begin(), filhos.end());

    cout << filhos.at(2) << endl;

    return 0;
}