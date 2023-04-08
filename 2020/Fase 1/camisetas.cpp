#include <iostream>
using namespace std;

int numPremiados, count, pequenas, medias, P, M, x;

int main()
{
    cin >> numPremiados;

    while (count < numPremiados)
    {
        cin >> x;

        if (x == 1)
            P++;
        else if (x == 2)
            M++;

        count++;
    }

    cin >> pequenas >> medias;

    if (pequenas == P && medias == M)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}