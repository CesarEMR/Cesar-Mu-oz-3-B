/* Realice un programa que permita dar como salida la población de dos países (a y b),
teniendo en cuenta para tal propósito lo siguiente:
* En el Primer Año el País “a” tiene menos población que el país “b”
* Las Tazas de crecimiento de los países “a” y “b” son de 6% y 3% anuales respectivamente.
* Se debe dar como salidas las poblaciones desde el segundo año hasta que la población de “a” 
exceda a la población de “b”, además la cantidad de años que transcurrieron para que esto sucediera */
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int year=2;
	float poblaA, poblaB;
	cout << "\nIngresa la poblacion del pais A: \n>";
	cin >> poblaA;
	cout << "\nIngresa la poblacion del pais B: \n>";
	cin >> poblaB;
	do
	{
		poblaA *= 1.06;
		cout << "\nPoblacion del pais A en el año " << year <<": " << poblaA;
		poblaB *= 1.03;
		cout << "\nPoblacion del pais B en el año " << year << ": " << poblaB << "\n";
		year++;
	} while (poblaA < poblaB);
	cout << "\nAños transcurridos: " << year-2;
	getchar();
	getchar();
	return 0;
}