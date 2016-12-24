#include "sterowanie.h"
#include <iostream>
#include <conio.h>

using namespace std;
Sterowanie::Sterowanie()
{
}
char Sterowanie::wcz_char(string info)
{
	cin >> klawiatura_char;
	cin.ignore(255, '\n');
	if (info == "info") cout << "\nklawiatura_char = \"" << klawiatura_char << "\"\n\n";
	return klawiatura_char;
}
string Sterowanie::wcz_ciag(bool przed, string info)
{
	cin.getline(klawiatura_string, 255);
	if (info == "info") cout << "\nklawiatura_string = \"" << klawiatura_string << "\"\n\n";
	return klawiatura_string;
}
char Sterowanie::calyczas(bool wlacz, string info)
{
	while (wlacz == true)
	{
		klawiatura_ciagle = _getch();
		if (info == "info") cout << "klawiatura_ciagle = \"" << klawiatura_ciagle << "\"\n";
	}
	return klawiatura_ciagle;
}