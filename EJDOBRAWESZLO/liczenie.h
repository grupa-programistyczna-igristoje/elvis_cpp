#pragma once
#include <string>
#include <sstream>
using namespace std;
class Liczenie
{
public:
	Liczenie(bool zapis, bool do_zera); //czy liczba i wynik ma byæ zapisana do pliku
private:
	int l2 [99999];
	long long l1;
	ostringstream temp_podaj_liczbe, temp_twoja_liczba;
	string podaj_liczbe, twoja_liczba;
};

