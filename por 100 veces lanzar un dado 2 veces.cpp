#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int valorrandom();
void mostrararray(int vec[], int tama);

int main()
{
	srand(time(NULL));
	int dado[6] = { 0 }, dado2[6] = {0}, suma[12] = { 0 }, numrand, numrand2;

	for (int i = 1; i <= 100; i++)
	{
		numrand = valorrandom();
		dado[numrand - 1]++;
		numrand2 = valorrandom();
		dado2[numrand2 - 1]++;
		suma[numrand + numrand2 - 1]++;

	}
	cout << "Dado 1.";
	mostrararray(dado, 6);
	cout << "\n\nDado 2.";
	mostrararray(dado2, 6);
	cout << "\n\nEl numero de veces que la suma de los dos dados resulta de l 2 al 12.";
	mostrararray(suma, 12);

	cin.get();
	cin.get();
	return 0;
}

int valorrandom()
{
	int num = 1 + rand() % 6;
	return num;
}

void mostrararray(int vec[], int tama)
{
	for (int i = 0; i <= tama-1; i++)
	{
		cout << "\n[" << i + 1 << "] = " << vec[i] << " => ";
		for (int x = 1; x <= vec[i]; x++)
		{
			cout << "*";
		}
	}
}