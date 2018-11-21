#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <fstream>
using namespace std;


int Menu();

void Mostrartablero(int piso[20][20], int largo, int ancho);


int main()

{
	
	int piso[20][20] = {0}, salir = 0;
	
	int poshori = 0, posverti = 0;
	bool pluma = false;
	piso[poshori][posverti] = 2;//posicion inicial.
	cout << "===============> C O M A N D O S <================";
	cout << "\n1.-Pluma hacia arriba.\t2.-Pluma hacia abajo.\n3.-Girar a la derecha.\t4.-Girar a la Izquierda.";
	cout << "\n5. - Avanza 1 espacio.\t6. - Mostrar tablero.\n7. - Salir.\n";
	
	do
	{
		int opcion = Menu();

		switch (opcion)
		{
		case 1:
			pluma = false;
			break;
		case 2:
			pluma = true;
			break;
		case 3:
			if(piso[poshori][posverti] < 5)
			{
				piso[poshori][posverti] += 1;
			}
			else
			{
				piso[poshori][posverti] = 2;
			}
			break;
		case 4:
			if (piso[poshori][posverti] > 2)
			{
				piso[poshori][posverti] -= 1;
			}
			else
			{
				piso[poshori][posverti] = 5;
			}
			break;
		case 5:
			//Avanzar hacia adelante.
			if (piso[poshori][posverti] == 2)
			{
				if(posverti < 19)
				{
					piso[poshori][posverti + 1] = piso[poshori][posverti];
					if (pluma == false)
					{
						piso[poshori][posverti] = 0;
					}
					else
					{
						piso[poshori][posverti] = 1;
					}
					posverti++;
				}
				else
				{
					cout << "\nHops!, ya estas en el borde en esta direccion.";
				}
			}
			//Avanzar hacia atras.
			if (piso[poshori][posverti] == 4)
			{
				if (posverti > 0)
				{
					piso[poshori][posverti - 1] = piso[poshori][posverti];
					if (pluma == false)
					{
						piso[poshori][posverti] = 0;
					}
					else
					{
						piso[poshori][posverti] = 1;
					}
					posverti--;
				}
				else
				{
					cout << "\nHops!, ya estas en el borde en esta direccion.";
				}
			}
			//Avanzar hacia abajo.
			if (piso[poshori][posverti] == 3)
			{
				if (poshori < 19)
				{
					piso[poshori + 1][posverti] = piso[poshori][posverti];
					if (pluma == false)
					{
						piso[poshori][posverti] = 0;
					}
					else
					{
						piso[poshori][posverti] = 1;
					}
					poshori++;
				}
				else
				{
					cout << "\nHops!, ya estas en el borde en esta direccion.";
				}
			}
			//Avanzar hacia arriba.
			if (piso[poshori][posverti] == 5)
			{
				if (poshori > 0)
				{
					piso[poshori - 1][posverti] = piso[poshori][posverti];
					if (pluma == false)
					{
						piso[poshori][posverti] = 0;
					}
					else
					{
						piso[poshori][posverti] = 1;
					}
					poshori--;
				}
				else
				{
					cout << "\nHops!, ya estas en el borde en esta direccion.";
				}
			}
			break;
		case 6:
			Mostrartablero(piso, 20, 20);
			break;
		case 7:
			salir++;
			break;
		}
	} while (salir == 0);
	
	getchar();
	
	getchar();
	
	return 0;

}

int Menu()
{
	int op;
	do
	{
		cout << ">";
		cin >> op;
		if (op < 1 || op>7)
			cout << "Ingresa una opcion valida.\n>";
	} while (op < 1 || op>7);
	return op;
}

void Mostrartablero(int piso[20][20], int largo, int ancho)
{

	cout << "         1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 \n\n\n";
	for(int i = 0; i < largo; i++)
	{
		cout << i + 1 << "\t";
		for (int x = 0; x < ancho; x++)
		{
			if (piso[i][x] == 0) 
			{
				cout << "[ ]";
			}
			else if(piso[i][x] == 1)
			{
				cout << "[+]";
			}
			else if(piso[i][x] == 2)
			{
				cout << "[>]";
			}
			else if (piso[i][x] == 3)
			{
				cout << "[v]";
			}
			else if (piso[i][x] == 4)
			{
				cout << "[<]";
			}
			else if (piso[i][x] == 5)
			{
				cout << "[^]";
			}
		}
		cout << endl;
	}
}