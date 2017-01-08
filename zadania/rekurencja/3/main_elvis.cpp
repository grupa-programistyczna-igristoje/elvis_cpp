#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

unsigned short kontynuacja_while = 1, kontynuacja_kontynuacji = 1;

void liczenie_Fibonacci()
{
	string kontynuacja;
	unsigned long liczba_uzytkownik;
	unsigned short zmienna1 = 1, zmienna2 = 1, wynik = 0;
	cout << "Wypisywanie liczb Fibonacciego\n\nPodaj ile liczb Fibonacciego ma zostac wypisane: ";
	cin >> liczba_uzytkownik;
	if (liczba_uzytkownik < 20)
	{
		for (int i = 0; liczba_uzytkownik < 20; liczba_uzytkownik--)
		{
			zmienna1 = zmienna2;
			zmienna2 = wynik;
			wynik = zmienna1 + zmienna2;
			cout << wynik << " ";
		}cout << "\nNacisnij dowolny przycisk...";
		_getch();
		system("cls");
	}
	else
	{
		cout << "\n===BLAD===\nMozesz wprowadzic liczbe tylko z zakresu 0-19\n==========";
		_getch();
	}
	kontynuacja_kontynuacji = 1;
	while (kontynuacja_kontynuacji == 1)
	{
		system("cls");
		cout << "\nKontynuowac? [Y\\N]\n";
		cin >> kontynuacja;
		if (kontynuacja == "y" || kontynuacja == "Y" || kontynuacja == "YES" || kontynuacja == "yes" || kontynuacja == "t" || kontynuacja == "T" || kontynuacja == "TAK" || kontynuacja == "tak")
		{
			kontynuacja_while = 1;
			kontynuacja_kontynuacji = 0;
			system("cls");
		}
		else if (kontynuacja == "n" || kontynuacja == "N" || kontynuacja == "NO" || kontynuacja == "no" || kontynuacja == "NIE" || kontynuacja == "nie")
		{
			kontynuacja_while = 0;
			kontynuacja_kontynuacji = 0;
			system("cls");
		}
	}
}
int main()
{
	while (kontynuacja_while == 1)
	{
		liczenie_Fibonacci();
	};
	return 0;
}
