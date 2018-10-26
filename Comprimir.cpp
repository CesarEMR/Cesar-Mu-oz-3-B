#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

void Comprimir(int vector[], int N);


int main()

{
	
int vector[10], num;

	for (int i = 0; i < 10; i++)

	{
		
		cout << "\nNumero "<<i+1<<": ";

		cin >> num;
		
		vector[i] = num;

	}
	
	Comprimir(vector, 10);
	

	for (int i = 0; i < 10; i++)

	{
		
	cout << "\nvec["<< i+1 <<"] = " << vector[i];

	}
	cin.get();
	cin.get();
	return 0;
}

void Comprimir(int vector[], int N)

{	

	int contador = 0,temporal;

	for (int x = 0, y = 0; x < N; x++)
	
	{

		if(vector[y] == vector[x + 1])

		{ 
			
			vector[x + 1] = -1;
		
		}

		else

		{
				
			y=x+1;

		}
	
	}
	
	/*for (int z = 1; z < N;)

	{
		
		for (int w = 2; w < N; w++)

		{

			if (vector[z] < 0)

			{
				
				temporal = vector[w];
	
			vector[w] = vector[z];
	
				vector[z] = temporal;

			}
			
			else

				z++;
		
		}
	
	}*/
}
