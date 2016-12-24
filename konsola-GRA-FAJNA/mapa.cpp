#include "mapa.h"
#include <iostream>


using namespace std;
Mapa::Mapa()
{
}
void Mapa::wczMapy()
{
	for (int i = 0; i < DLUGOSC; i++)
	{
		for (int k = 0; k < SZEROKOSC; k++)
		{
			znakiMapy[i][k] = '#';
		}
	}
}
void Mapa::iniMapy()
{
	for (int i = 0; i < DLUGOSC; i++)
	{
		for (int k = 0; k < SZEROKOSC; k++)
		{
			znakiMapy[i][k] = '#';
		}
	}
}
void Mapa::rysMapy()
{
	for (int i = 0; i < DLUGOSC; i++)
	{
		for (int k = 0; k < SZEROKOSC; k++)
		{
			if (i!=0 && i!=(DLUGOSC-1) && (k / 1) != 0 && (k / (SZEROKOSC-1)) <= 0) //(k % 2) > 0 co druga kolumna
			{
				printf("%c",176);
			}
			else
			printf("%c", 219);
		}
		cout << endl;
	}
}