#include<iostream>
#include<vector>
#include<string>
using namespace std;

int count, dist, tam, vog;

string p, cifra, consoante,
consoantes[19] = {"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "x", "z"},
vogais[5] = {"a","e", "i", "o", "u"},
letras[27] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "x", "z"};

vector <string> palavra;

int main()
{
    cin >> p;

    tam = p.length();

    while (count < tam) {
        palavra.push_back(p.substr(count, 1));

        consoante = palavra.at(count);
        if (consoante != "a" || consoante != "o" || consoante != "i" || consoante != "o" || consoante != "u") {
            for (int l=0; l<24; l++) {
                if (consoantes[l] == consoante) {
                    palavra.push_back(consoantes[l+1]);
                }

                /*if (letras[l] == consoante) {
                    for (int a=l; a<27; a++) {
                        for (int vogal=0; vogal<5; vogal++) {
                            if (letras[a] == vogais[vogal]) {
                                palavra.push_back(vogais[vogal]);
                            }
                        }
                    }
                }*/
            }
        }

        count++;
    }

    tam = palavra.size();

    for (int i=0; i<tam; i++) {
        cifra += palavra.at(i);
    }


    cout << cifra << endl;
    return 0;
}