#include<iostream>
#include<vector>
using namespace std;

int qtdNum, soma, N;

int main()
{
    cin >> qtdNum;
    
    vector <int> ult;

    for (int i=0; i<qtdNum; i++) {
        cin >> N;

        if (N == 0) {
            ult.pop_back();
        } else {
            ult.push_back(N);
        }
    }

    for (int i=0; i<ult.size(); i++) {
        soma += ult.at(i);  
    }

    cout << soma << endl;

    return 0;
}