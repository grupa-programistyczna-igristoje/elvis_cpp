#include <iostream>
#include <conio.h>

using namespace std;

unsigned int n;
unsigned int suma = 0;
int i;


int main() 
{
	cout << "Podaj liczbe" << endl;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		suma += i;
	}
	cout << "Suma liczb to " << suma << endl;
	_getch();
}
