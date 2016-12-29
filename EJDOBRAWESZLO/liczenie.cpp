#include "liczenie.h"
#include <iostream>
#include <fstream>
#include <string> //niepotrzebne jednak
#include <math.h>

using namespace std;

Liczenie::Liczenie(bool zapis, bool do_zera)
{
	temp_twoja_liczba << "";
	twoja_liczba = temp_twoja_liczba.str();
	temp_podaj_liczbe << "Podaj liczbe do analizy: ";
	podaj_liczbe = temp_podaj_liczbe.str();
		printf("%s\n", podaj_liczbe.c_str());
		cin >> l1;
		if (l1 % 2 == 0 && l1 >= 0)
		{
			temp_twoja_liczba << "Liczba " << l1 << " jest dodatnia, parzysta";
		}
		else if (l1 % 2 == 0 && l1 < 0)
		{
			temp_twoja_liczba << "Liczba " << l1 << " jest ujemna, parzysta";
		}
		else if (l1 % 2 != 0 && l1 >= 0)
		{
			temp_twoja_liczba << "Liczba " << l1 << " jest dodatnia, nieparzysta";
		}
		else if (l1 % 2 != 0 && l1 < 0)
		{
			temp_twoja_liczba << "Liczba " << l1 << " jest ujemna, nieparzysta";
		}
		else
		{
			cout << "Cos zle dales";
		}
		twoja_liczba = temp_twoja_liczba.str();
		printf("%s\n", twoja_liczba.c_str());
		if (zapis == true)
		{
			ofstream liczby("twoje_liczby.txt", ios_base::app);
				liczby<< "\n==============\n" << twoja_liczba <<"\nSekwencja liczb od "<< l1 << " do 0:" <<  endl;
				printf("%s", "Zapisano pomyslnie liczbe");
		}
		if (do_zera == true)
		{
			if (l1 >= 0)
			{
				long long i;
				cout << endl;
				for (i = 0; i <= l1; i++)
				{
					cout << "\rZapisywanie sekwencji... (" << abs(i) << ")";
					if (zapis == true)
					{
						ofstream liczby("twoje_liczby.txt", ios_base::app);
							liczby << l1 - i << " ";
					}
				}
				cout << "\rZapisano pomyslnie " << abs(i) << " elementow\n";
			}
			else if (l1 < 0)
			{
				long long i;
				cout << endl;
				for (i = 0; i >= l1; i--)
				{
					cout << "\rZapisywanie sekwencji... (" << abs(i) << ")";
					if (zapis == true)
					{
						ofstream liczby("twoje_liczby.txt", ios_base::app);
							liczby << l1 - i << " ";
					}
				}
				cout << "\rZapisano pomyslnie " << abs(i) << " elementow\n";
			}
		}
		if (zapis == true)
		{
			ofstream liczby("twoje_liczby.txt", ios_base::app);
			if (liczby.is_open())
			{
				liczby.close();
			}
		}
}
