#include <iostream>
using namespace std;

string szyfruj(string tekst, int klucz[], int n)
{   

	int dl = tekst.size(), m;
	string wynik;
	char tablica[9][4];
	if (dl % n) m = dl / n + 1;
	else m = dl / n;
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (k < dl)
			{
				tablica[i][j] = tekst[k];
				k++;
			}
			else tablica[i][j] = '\0';
	int l;
	for (int k = 0; k < n; k++)
	{
		l = klucz[k];
		for (int i = 0; i < m; i++)
			if (tablica[i][l] != '\0') wynik += tablica[i][l];
	}
	return wynik;
}



int main()
{
	string tekst;
	cout << "Wpisz tekst do szyfrowania ";
	cin >> tekst;
	int kol = 4;
	int klucz[4] = {3,2,0,1};
	cout << szyfruj(tekst, klucz, kol);
}