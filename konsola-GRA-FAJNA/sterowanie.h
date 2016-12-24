#pragma once
#include <string>

using namespace std;
class Sterowanie
{
public:
	Sterowanie(); //tworzenie obiektu sterowanie
	char wcz_char(string info);  //wczytaj jeden znak, jeœli zostanie wprowadzone wiêcej znaków, to tylko pierwszy znak jest zapisywany
	string wcz_ciag(bool przed, string info);  //wczytaj ci¹g znaków, enter (nowa linia) koñczy zapisywanie, parametr 1 musi byæ true je¿eli chcemy wywo³aæ tê funkcjê od razu po wywo³aniu funkcji "wcz_char"
	char calyczas(bool wlacz, string info);  //sterowanie ci¹g³e, parametr 1 true w³¹cza rejestracjê znaków, parametr 2 pokazuje info o sterowaniu
	char klawiatura_char;
	char klawiatura_ciagle;
	char klawiatura_string[255];

};

