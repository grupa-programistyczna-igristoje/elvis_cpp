#pragma once
#include <string>

using namespace std;
class Sterowanie
{
public:
	Sterowanie(); //tworzenie obiektu sterowanie
	char wcz_char();  //wczytaj jeden znak, je�li zostanie wprowadzone wi�cej znak�w, to tylko pierwszy znak jest zapisywany
	string wcz_ciag();  //wczytaj ci�g znak�w, enter (nowa linia) ko�czy zapisywanie
	char calyczas(bool wlacz, bool info);  //sterowanie ci�g�e, parametr 1 true w��cza rejestracj� znak�w, parametr 2 pokazuje info o sterowaniu
	char klawiatura_char;
	char klawiatura_ciagle;
	char klawiatura_string[255];

};

