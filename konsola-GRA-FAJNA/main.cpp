#include <iostream> //wiadomo
#include "mapa.h" //klasa, obiekt mapy, rysowanie, inicjalizacja, wczytywanie
#include <conio.h> //getch, czyli znaki bez entera
#include <fstream> //wczytywanie
using namespace std;

int main()
{
	Mapa mapa1;
	mapa1.iniMapy();
	mapa1.rysMapy();
	_getch();
}