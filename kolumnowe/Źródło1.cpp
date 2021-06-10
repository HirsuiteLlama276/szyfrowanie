#include <iostream>
using namespace std;

string rozszyfruj(string tekst, int klucz[], int kol)
{
    int dl = tekst.size();
    int wier;
    if (dl % kol != 0)
        wier = (dl / kol) + 1;
    else
        wier = (dl / kol);

    char tab[wier][kol];
    char kopia[wier][kol];

    string wynik = "";

    int k = 0;
    for (int j = 0; j < kol; j++)
        for (int i = 0; i < wier; i++)
        {
            tab[i][j] = tekst[k];
            k++;
        }
    cout << endl;
    cout << "Tablica z zamienionymi kolumnami" << endl;

    for (int i = 0; i < wier; i++)
    {
        for (int j = 0; j < kol; j++)
            cout << tab[i][j];
        cout << endl;
    }
    for (int i = 0; i < kol; i++)
    {
        for (int j = 0; j < wier; j++)
            kopia[j][klucz[i]] = tab[j][i];
    }

    for (int i = 0; i < wier; i++)
    {
        for (int j = 0; j < kol; j++)
            wynik += kopia[i][j];
    }
    return wynik;
}


int main()
{
    string kod = "AWYKWIAPCSSOYERAZTZCZ";
    int kol = 3;
    int klucz[3] = { 2,0,1 };
    cout << rozszyfruj(kod, klucz, kol);
}
