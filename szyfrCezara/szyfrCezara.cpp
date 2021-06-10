// szyfrCezara.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

string szyfruj(string tekst, string alfabet, int klucz)
{
	string wynik;
	int dlT = tekst.size(), dlA = alfabet.size();
	for (int i = 0; i < dlT; i++)
		for (int j = 0; j < dlA; j++)
			if (tekst[i] == alfabet[j]) wynik = wynik + alfabet[(j + klucz) % dlA];
				return wynik;
}

int main()
{
	string alfabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string tekst;
	int klucz;
	cout << "Wpisz swój tekst do zaszyfrowania:" << endl;
	cin >> tekst;
	cout << "Wpisz klucz do szyfru:" << endl;
	cin >> klucz;
	cout << "Twoj zaszyfrowany tekst: " << szyfruj(tekst, alfabet, klucz);
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
