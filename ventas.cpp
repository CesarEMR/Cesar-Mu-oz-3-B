#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int Menu();
void Tabularventas(int matrix[5][6], int filas, int columnas);
void Capturar(int matrix[5][6], int vendedor, int producto, int importe);
void Total(int matrix[5][6], int filas, int columnas);


int main()
{
	cout << "**************MENU**************";
	cout << "\n1.-Capturar hoja.\n2.-Tabular ventas.\n0.-Salir.";
	int ventas[5][6] = {0}, salir = 0;
	do
	{
		int opcion = Menu();

		switch (opcion)
		{
		case 1:
			int numvendedor, numproduc, importe;
			cout << "\nNumero de vendedor: ";
			cin >> numvendedor;
			cout << "\nNumero de producto: ";
			cin >> numproduc;
			cout << "\nIngresa el importe a sumar: $";
			cin >> importe;
			Capturar(ventas, numvendedor, numproduc, importe);
			break;
		case 2:
			Tabularventas(ventas, 5, 6);
			break;
		
		case 0:
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
		cout << "\n>";
		cin >> op;
		if (op < 0 || op>2)
			cout << "Ingresa una opcion valida.\n>";
	} while (op < 0 || op>2);
	return op;
}

void Tabularventas(int matrix[5][6], int filas, int columnas)
{
	Total(matrix,filas,columnas);
	cout << "\t";
	for (int y = 1; y <= columnas-1; y++)
	{
		cout << "\tProducto " << y;
	}
	cout << "\tTotal";
	for (int i = 0; i < filas-1; i++)
	{
		cout << "\nVendedor " << i+1 << "\t";
		for (int x = 0; x < columnas-1; x++)
		{
			cout << "\t" << matrix[i][x] << "\t";
		}
		cout << matrix[i][columnas-1];
		cout << "\n";
	}
	cout << "\nTotal\t";
	for(int i = 0; i < columnas-1; i++)
	{
		cout << "\t\t" << matrix[filas-1][i];
	}
}
void Capturar(int matrix[5][6], int vendedor, int producto,int importe) 
{
	matrix[vendedor-1][producto-1] += importe;
}

void Total(int matrix[5][6], int filas, int columnas)
{
	int suma = 0;
	for (int i = 0; i < filas - 1; i++)
	{
		for (int x = 0; x < columnas - 1; x++)
		{
			suma += matrix[i][x];
		}
		matrix[i][columnas - 1] = suma;
		suma = 0;
	}
	int x,suma2 =0;
	for (int i = 0; i < columnas - 1; i++)
	{
		for (x = 0; x < filas - 1; x++)
		{
			suma2 += matrix[x][i];
		}
		matrix[filas - 1][i] = suma2;
		suma2 = 0;
	}
}