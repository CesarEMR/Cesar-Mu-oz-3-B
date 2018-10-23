#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	bool elementos[1001] = { true };

	for (int x = 1; x < 1000; x++)
	{
		elementos[x] = true;
	}

	for (int i = 2; i < 1000; i++)
	{
		for (int y = 2; i*y < 1000; y++)
		{
			elementos[i*y] = false;
		}
	}

	for (int x = 1; x < 1000; x++)
	{
		if (elementos[x] == true)
		{
			cout << "\n " << x;
		}
	}

	cin.get();
	cin.get();
	return 0;
}
