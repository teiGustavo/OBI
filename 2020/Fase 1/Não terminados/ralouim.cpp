#include <iostream>
using namespace std;

int numTendas, qtdGuloseimas, count, cordX, cordY, dist, ultDist;

int main()
{
    cin >> numTendas ;

    while (count < numTendas)
    {
        cin >> cordX >> cordY;

        dist = (cordX - ultDist) + (cordY - ultDist);

        if (dist < ultDist) {
            qtdGuloseimas++;
        }

        ultDist = dist;
        count++;
    }
    
    cout << qtdGuloseimas << endl;

    return 0;
}