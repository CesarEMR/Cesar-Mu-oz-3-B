#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

void Agregar(int vec[20],int tama);
int Eliminar(int vec[20], int tama,int todelete);
int Buscar(int vec[20], int tama, int buscado);
bool Modificar(int vec[20], int tama, int elemento, int newelemento);
void Insertar(int vec[20], int tama, int posicion);
void Reporte(int vec[20], int tama);
int Menu();
int Contenidoaleatorio();
int Posaleatoria();

int main()
{
	srand(time(NULL));
	int vec[20] = {0}, salir = 0;
	cout << "**************MENU**************";
	cout << "\n1.-Agregar.\t2.-Eliminar.\n3.-Buscar.\t4.-Modificar.\n5.-Insertar.\t6.-Reporte.\n0.-Salir.";
	do
	{
		int opcion = Menu();

		switch (opcion)
		{
			case 1:
				Agregar(vec, 20);
				break;
			case 2:
				int todelete;
				cout << "\nIngresa el valor a eliminar: \n>";
				cin >> todelete;
				if (Eliminar(vec, 20, todelete) == 1)
				{
					cout << "\nEliminado.";
				}
				else
				{
					cout << "\nNo Existe.";
				}
				break;
			case 3:
				int buscado, posicion;
				cout << "Ingresa el elemento a buscar: \n>";
				cin >> buscado;
				posicion = Buscar(vec, 20,buscado);
				if (posicion == -1)
				{
					cout << "No Exitste.";
				}
				else
				{
					cout << "El elemento se encuentra en la posicion " << posicion;
				}
				break;
			case 4:
				int elemento, newelemento;
				cout << "Ingresa el valor a modificar: \n>";
				cin >> elemento;
				cout << "Ingresa el nuevo valor : \n>";
				cin >> newelemento;
				if (Modificar(vec, 20, elemento, newelemento) == false)
				{
					cout << "\nEl elemento a a modificar no existe.";
				}
				else
					cout << "\nOperacion Exitosa.";
				break;
			case 5:
				int pos; 
				cout << "Ingresa el indice a Insertar: \n>";
				cin >> pos;
				Insertar(vec, 20, pos);
				break;
			case 6:
				Reporte(vec, 20);
				break;
			case 0:
				salir++;
				break;
		}
	}while(salir == 0);

	return 0;
}

int Menu()
{
	int op;
	do
	{
		cout << "\nN_Funcion>";
		cin >> op;
		if (op < 0 || op>6)
			cout << "Ingresa una opcion valida.\n>";
	}while (op < 0 || op>6);
	return op;
}

void Agregar(int vec[20], int tama) 
{
	int agregado = 0;
	if (vec[tama - 1] != 0)
	{
		cout << "\nEl vector esta lleno.";
	}
	else
	{
		for (int i = 0; i < tama && agregado == 0; i++)
		{
			if (vec[i] == 0 && agregado == 0)
			{
				vec[i] = Contenidoaleatorio();
				agregado++;
			}
		}
	}
	
}
int Eliminar(int vec[20], int tama,int todelete)
{
	int eliminados = 0;
	for (int i = 0; i < tama; i++)
	{
		if (vec[i] == todelete)
		{
			for (int x = i; x < tama - 1; i++)
			{
				vec[x] = vec[x + 1];
			}
			vec[tama - 1] = 0;
			return 1;
		}
	}
	return 0;
}
int Buscar(int vec[20], int tama, int buscado)
{
	for (int i = 0; i < tama; i++)
	{
		if (vec[i] == buscado)
		{
			return i;
		}
	}
	return -1;
}
bool Modificar(int vec[20], int tama,int elemento, int newelemento)
{
	bool semodifico = false;

	for (int i = 0; i < tama; i++)
	{
		if (vec[i] == elemento)
		{
			vec[i] = newelemento;
			semodifico = true;
		}
	}
	return semodifico;
}
void Insertar(int vec[20], int tama, int posicion)
{
	int insercionvalida = false;
	for (int i = 0; i < tama; i++)
	{
		if (i == posicion)
		{
			if (vec[i] != 0)
			{
				vec[i] = Contenidoaleatorio();
				insercionvalida = true;
			}
		}
	}
	if(insercionvalida == false)
	{
		cout << "Posicion no valida.";
	}
	else
	{
		cout << "Operacion exitosa.";
	}
}
void Reporte(int vec[20], int tama)
{
	for (int i = 0; i < tama; i++)
	{	
		cout << "\n["<< i << "] = " << vec[i];
	}
}
int Posaleatoria() 
{
	int num = 1 + rand() % 20;
	return num;
}
int Contenidoaleatorio()
{
	int num = 10 + rand() % 291;
	return num;
}