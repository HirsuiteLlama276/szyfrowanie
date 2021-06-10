
#include <iostream>
using namespace std;

string szyfruj(string tekst)
{
    string wynik;
    int dl = tekst.size();
    for (int i = 0; i < dl; i += 2) wynik += tekst[i];
    for (int i = 1; i < dl; i += 2) wynik += tekst[i];
    return wynik;
}

int main()
{
    string tekst;
    cout << "Wpisz tekst do zaszyfrowania" << endl;
    cin >> tekst;
    cout << "Twoj zaszyfrowany komunikat: " << szyfruj(tekst) << endl;
}
