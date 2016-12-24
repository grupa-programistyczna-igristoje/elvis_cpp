#pragma once
#include <iostream>
using namespace std;

class Mapa
{
public:
	Mapa(); //tworzenie obiektu Mapa
	void wcz_Mapy(); //wczytywanie mapy
	void obl_Mapy(); //inicjalizacja mapy
	void rys_Mapy(); //rysowanie mapy
private:
	#define SZEROKOSC 100
	#define DLUGOSC 20
	char znakiMapy[DLUGOSC][SZEROKOSC];

};

