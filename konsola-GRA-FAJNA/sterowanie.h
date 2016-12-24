#pragma once
#include <string>

using namespace std;
class Sterowanie
{
public:
	Sterowanie(); //tworzenie obiektu sterowanie
	char wcz_char();  //wczytaj jeden znak, jeœli zostanie wprowadzone wiêcej znaków, to tylko pierwszy znak jest zapisywany
	string wcz_ciag();  //wczytaj ci¹g znaków, enter (nowa linia) koñczy zapisywanie
	char calyczas(bool wlacz, bool info);  //sterowanie ci¹g³e, parametr 1 true w³¹cza rejestracjê znaków, parametr 2 pokazuje info o sterowaniu
	char klawiatura_char;
	char klawiatura_ciagle;
	char klawiatura_string[255];

};

