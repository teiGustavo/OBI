#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int idade;
vector <int> I;

int main()
{
    for (int i=0; i<3; i++) {
        cin >> idade;
        I.push_back(idade);
    }

    sort(I.begin(), I.end());
    
    cout << I.at(1) << endl;
    return 0;
}