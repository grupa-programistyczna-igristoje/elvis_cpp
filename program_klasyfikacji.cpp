/*###############################
program klasyfikacji
kapi ochmański 2016
grupa programistyczna "igristoje"
#################################*/
#include <string> //zawarcie biblioteki ze stringami, edit: niepotrzebne, bo nie używam nigdzie ciągów znaków już
#include <iostream> //zawarcie biblioteki iostream

typedef unsigned short mz; //definiowanie swojego typu zmiennych
const mz szer=119; //stała na całą szerokość konsoli
mz ocena,pkt;

mz linia(mz l1) //funkcja rysująca linie oddzielajaca
{
	for (mz i = 0; i < l1; i++)
	{
		std::cout << "-";
	}
	return 0;
}

class Klasyfikacja 
{
public:
	mz obliczanie(short pkt) //funkcja obliczająca jaką dostaje się ocenę
	{
		if (pkt > 100)
		{
			std::cout << "\nNie mozesz miec wiecej punktow niz 100\n";
		}
		if (pkt <= 100 && pkt >= 90)
		{
			ocena = 6;
			std::cout << "\nMasz " << ocena << std::endl;
			std::cout << "wyjdz ze strefy komfortu\n";
		}
		if (pkt <= 89 && pkt >= 80)
		{
			ocena = 5;
			std::cout << "\nMasz " << ocena << std::endl;
		}
		if (pkt <= 79 && pkt >= 70)
		{
			ocena = 4;
			std::cout << "\nMasz " << ocena << std::endl;
		}
		if (pkt <= 69 && pkt >= 60)
		{
			ocena = 3;
			std::cout << "\nMasz " << ocena << std::endl;
		}
		if (pkt <= 59 && pkt >= 50)
		{
			ocena = 2;
			std::cout << "\nMasz " << ocena << std::endl;
		}
		if (pkt <= 49 && pkt >= 0)
		{
			ocena = 1;
			std::cout << "\nMasz " << ocena << std::endl;
		}
		if (pkt <0)
		{
			std::cout << "\nNie mozesz miec ujemnej liczby punktow\n";
		}
		return 0;
	}
};

int main() //inicjacja oraz wywołanie funkcji main
{
	linia(szer);
	std::cout << "\nPodaj swoje pkt: ";
	std::cin >> pkt;
	std::cout << "Zapisywanie danych...\n"; //kurwa zajebiste
	linia(szer);
	Klasyfikacja oceny1;
	oceny1.obliczanie(pkt);
	return 0;
}
