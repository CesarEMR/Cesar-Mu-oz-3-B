#include "stdafx.h"
#include <iostream>
using namespace std;


int Potencia(int base, int expo);
int Factorial(int n);
int main()
{
	int opcion,x,n;
	float resultado = 0;
	cout << "\n-------------------Menu--------------------\n";
	cout << "\n3.-Sacar Coseno.";
	cout << "\n2.-Sacar Seno.";
	cout << "\n1.-Sacar Logaritmo Natural.";
	cout << "\n0.-Salir.";
	cout << "\nIngresa el numero de la opcion deseada: \n>";
	cin >> opcion;
	do 
	{
		if(opcion == 3)
		{
			cout << "Ingresa el valor de x para sacar Coseno: \n>";
			cin >> x;
			cout << "\nIngresa el numero de la serie: \n>";
			cin >> n;
			resultado = 1;
			for (int i = 2; i <= n; i+=2)
			{
				resultado -= (float)Potencia(x, i) / (float)Factorial(i);
			}
			cout << "\nResultado: " << resultado;
		}
		else if (opcion == 2)
		{
			cout << "Ingresa el valor de x para sacar Seno: \n>";
			cin >> x;
			cout << "\nIngresa el numero de la serie: \n>";
			cin >> n;
			for (int i = 1; i <= n; i++)
			{
				resultado -= (float)Potencia((1 / i)*(x - 1 / x), i); 
			}
			cout << "\nResultado: " << resultado;
		}
		else if(opcion == 1)
		{
			cout << "Ingresa el valor de x para sacar Ln: \n>";
			cin >> x;
			cout << "\nIngresa el numero de la serie: \n>";
			cin >> n;
			resultado = x;
			for (int i = 3; i <= n; i += 2)
			{
				resultado -= (float)Potencia(x, i) / (float)Factorial(i);
			}
			cout << "\nResultado: " << resultado;
		}
		if (opcion != 0)
		{
			x = 0;
			cout << "\n\nIngresa el numero de la siguiente operacion  o (0) para salir. \n>";
			cin >> opcion;
		}
	}while(opcion != 0);

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