#include "mapa.h" //klasa, obiekt mapy, rysowanie, inicjalizacja, wczytywanie
#include "sterowanie.h" //klasa, obiekt sterowania, rejestrowanie przycisków
#include <iostream> //wiadomo
#include <conio.h> //getch, czyli znaki bez entera
#include <fstream> //wczytywanie
using namespace std;

int main()
{
	Mapa mapa1;
	mapa1.obl_Mapy();
	mapa1.rys_Mapy();
	Sterowanie sterowanie1;
	sterowanie1.wcz_ciag();  //test ci¹gu znaków
	cout << sterowanie1.klawiatura_string;
	sterowanie1.calyczas(true, true);  //test ci¹g³ego sterowanie
	cin.ignore(2);
}