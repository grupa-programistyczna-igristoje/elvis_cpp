#pragma once
#include <iostream>
using namespace std;

class Mapa
{
public:
	Mapa(); //tworzenie obiektu Mapa
	void wczMapy(); //wczytywanie mapy
	void iniMapy(); //inicjalizacja mapy
	void rysMapy(); //rysowanie mapy
private:
	#define SZEROKOSC 100
	#define DLUGOSC 20
	char znakiMapy[DLUGOSC][SZEROKOSC];

};

