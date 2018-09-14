#include "stdafx.h"
#include <iostream>
using namespace std;


int Potencia(int base, int expo);
int Factorial(int n);	
double sen(int x, int n);
double cos(int x, int n);
double ln(int x, int n);
int main()
{
	float  x, n;
	int opcion;
	cout << "\n-------------------Menu--------------------\n";
	cout << "\n3.-Sacar Coseno.";
	cout << "\n2.-Sacar Seno.";
	cout << "\n1.-Sacar Logaritmo Natural.";
	cout << "\n0.-Salir.";
	cout << "\nIngresa el numero de la opcion deseada: \n>";
	cin >> opcion;
	do
	{
		if (opcion == 3)
		{
			cout << "Ingresa el valor de x para sacar Coseno: \n>";
			cin >> x;
			cout << "\nIngresa el numero de la serie: \n>";
			cin >> n;
			cout << "\nCoseno: " << cos(x,n);
		}
		else if (opcion == 2)
		{
			cout << "Ingresa el valor de x para sacar Seno: \n>";
			cin >> x;
			cout << "\nIngresa el numero de la serie: \n>";
			cin >> n;
			cout << "\nLogaritmo natural: " << ln(x, n);
		}
		else if (opcion == 1)
		{
			cout << "Ingresa el valor de x para sacar Ln: \n>";
			cin >> x;
			cout << "\nIngresa el numero de la serie: \n>";
			cin >> n;
			cout << "\nSeno: " << sen(x, n);
		}
		if (opcion != 0)
		{
			x = 0;
			cout << "\n\nIngresa el numero de la siguiente operacion  o (0) para salir. \n>";
			cin >> opcion;
		}
	} while (opcion != 0);

	getchar();
	return 0;
}


int Potencia(int base, int expo)
{
	int pot = 1;
	for (int i = 1; i <= expo; i++)
	{
		pot *= base;
	}
	return pot;
}
int Factorial(int n)
{
	int fac = 1;
	for (int y = 1; y <= n; y++)
	{
		fac *= y;
	}
	return fac;
}

double sen(int x, int n)
{
	int sig = -1;
	int ov = 3;
	float suma = x;
	for (int i = 1; i <= n; i ++)
	{
		suma += (float)Potencia(x, ov) / (float)Factorial(ov) * sig;
		ov += 2;
		sig *= -1;
	}
	return suma;
}

double cos(int x, int n)
{
	int sig = 1;
	int ov = 0;
	float suma = 0;
	for (int i = 2; i <= n; i += 2)
	{
		suma  += (float)Potencia(x, ov) / (float)Factorial(ov) * sig;
		ov += 2;
		sig *= -1; 

	}
	return suma; 
}

double ln(int x, int n)
{
	float suma = 0;
	for (int i = 1; i <= n; i++)
	{
		suma += (1.0 / i) * (float)Potencia((x - 1)/x, i);
	}
	return suma;
}
