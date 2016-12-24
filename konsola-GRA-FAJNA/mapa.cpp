#include "mapa.h"
#include <iostream>

using namespace std;
Mapa::Mapa()
{
}
void Mapa::wcz_Mapy()
{
	for (int i = 0; i < DLUGOSC; i++)
	{
		for (int k = 0; k < SZEROKOSC; k++)
		{
			znakiMapy[i][k] = '#';
		}
	}
}
void Mapa::obl_Mapy()
{
	for (int i = 0; i < DLUGOSC; i++)
	{
		for (int k = 0; k < SZEROKOSC; k++)
		{
			if (i != 0 && i != (DLUGOSC - 1) && (k / 1) != 0 && (k / (SZEROKOSC - 1)) <= 0) //(k % 2) > 0 co druga kolumna
			{
				znakiMapy[i][k] = ' ';
			}
			else
				znakiMapy[i][k] = '#';
		}
	}
}
void Mapa::rys_Mapy()
{
	for (int i = 0; i < DLUGOSC; i++)
	{
		for (int k = 0; k < SZEROKOSC; k++)
		{
			if (i != 0 && i != (DLUGOSC - 1) && (k / 1) != 0 && (k / (SZEROKOSC - 1)) <= 0) //(k % 2) > 0 co druga kolumna
			{
				//printf("%c",176);
				printf("%c", znakiMapy[i][k]);
			}
			else
				//printf("%c", 219); //wyświetlanie znaku ASCII o numerze 219, to %c określa, że to char
				printf("%c", znakiMapy[i][k]);
		}
		cout << endl;
	}
}