#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int Procesamiento(int he,int me,int se);
void Salida(float segundos);

int main()
{
	int he,me,se,hs,ms,ss;

	cout << "Ingresa la Hora de entrada.";
	cout << "\nHora:";
	cin >> he;
	cout << "\nMinutos:";
	cin >> me;
	cout << "\nSegundos:";
	cin >> se;
	cout << "\nSegundos: " << Procesamiento(he, me, se);
	Salida(Procesamiento(he, me, se));


	cin.get();
	cin.get();
	return 0;
}

int Procesamiento(int he, int me, int se)
{
	return ((he * 60) * 60) + (me * 60) + se;
}
	
void Salida(float segundos)
{
	int h, m, s;
	double residuo = 0.0;
	h = segundos / 3600;
	residuo = (segundos / 3600) - h;
	m = residuo * 60;
	residuo = (residuo * 60) - m;
	s = (residuo * 60) + 0.1;	
	cout <<"\n\n"<< h << " : " << m << " : " << s;
}

