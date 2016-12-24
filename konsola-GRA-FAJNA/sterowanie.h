#pragma once
#include <string>

using namespace std;
class Sterowanie
{
public:
	Sterowanie(); //tworzenie obiektu sterowanie
	char wcz_char(string info);  //wczytaj jeden znak, je�li zostanie wprowadzone wi�cej znak�w, to tylko pierwszy znak jest zapisywany
	string wcz_ciag(bool przed, string info);  //wczytaj ci�g znak�w, enter (nowa linia) ko�czy zapisywanie, parametr 1 musi by� true je�eli chcemy wywo�a� t� funkcj� od razu po wywo�aniu funkcji "wcz_char"
	char calyczas(bool wlacz, string info);  //sterowanie ci�g�e, parametr 1 true w��cza rejestracj� znak�w, parametr 2 pokazuje info o sterowaniu
	char klawiatura_char;
	char klawiatura_ciagle;
	char klawiatura_string[255];

};

