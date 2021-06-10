
#include <iostream>
using namespace std;

string deszyfruj(string tekst)
{
    string wynik;
    int dl = tekst.size();
    for (int i = dl; i > 0; i =- 4) wynik = wynik + tekst[i];
    for (int i = dl-1; i > 0; i =- 2) wynik = wynik + tekst[i];
    for (int i = dl-2; i > 0; i =- 4) wynik = wynik + tekst[i];
    return wynik;
}

int main()
{
    string tekst;
    cout << "Wpisz tekst do odszyfrowania" << endl;
    cin >> tekst;
    cout << "Twoj odszyfrowany komunikat: " << deszyfruj(tekst) << endl;
}