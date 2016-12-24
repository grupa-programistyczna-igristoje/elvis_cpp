#include "sterowanie.h"
#include <iostream>
#include <conio.h>

using namespace std;
Sterowanie::Sterowanie()
{
}
char Sterowanie::wcz_char()
{
	cin.getline(klawiatura_char, 1); //czemu nie dzia³asz???????????
	return klawiatura_char;
}
string Sterowanie::wcz_ciag()
{
	cin.getline(klawiatura_string, 255);
	return klawiatura_string;
}
char Sterowanie::calyczas(bool wlacz, bool info)
{
	while (wlacz == true)
	{
		klawiatura_ciagle = _getch();
		if (info == 1) cout << "\r" << klawiatura_ciagle;
	}
	return klawiatura_ciagle;
}