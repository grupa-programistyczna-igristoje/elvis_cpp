/*=====================
gra konsolowa unikanie
grupa programistyczna "igristoje"
kapi ochmanski 2016
siatka.h
=======================*/
#pragma once
#define SZEROKOSC 150
#define	DLUGOSC 150 //definiowanie stałych szerokość i długość siatki

char siatka[SZEROKOSC][DLUGOSC];
char *gdzie_siatka; //wskaźnik bitów (znaków) w siatce

void rys_siatka(bool info, int dodatek, int dodatek2)
{
	int i, k, l;
	//k = 0;
	for(i=0; i < SZEROKOSC; i++)
		for (k = 0; k < DLUGOSC; k++)
		{
			siatka[i][k] = '|';
			printf("%c", siatka[i][k]);
			for (l = 0; l < SZEROKOSC-DLUGOSC-dodatek*dodatek2 ; l++)
			{
				siatka[i][k] = '\\';
				printf("%c", siatka[l][k]);
			}
		}
	while (info == true)
	{
		std::cout << "\n\nSzerokosc mapy wynosi: " << SZEROKOSC;
		std::cout << "\nDlugosc mapy wynosi: " << DLUGOSC;
		std::cout << "\nPole mapy wynosi: " << SZEROKOSC * DLUGOSC << std::endl;
		printf("Ostatni znak to: %c\n", siatka[SZEROKOSC - 1][DLUGOSC - 1]);
		info = false;
	}
}
