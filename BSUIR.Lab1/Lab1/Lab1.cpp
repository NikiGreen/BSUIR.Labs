// Lab1.cpp: определяет точку входа для консольного приложения.
//Лабораторная работа №1 Вариант 4

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

double func(double x, double y, double z) {
	double rezult;
	rezult = pow(abs(cos(x) - cos(y)), (1 + 2 * pow(sin(y), 2)))*(1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);
	return rezult;
}

int main()
{
	

	setlocale(LC_ALL, "Russian");
	double rezult,w=1.9873, x=0.4*pow(10,4), y=-0.875, z=-0.475*pow(10,-3);
	cout << "Решаемая функция: w=(|cos(x)-cos(y)|^(1+2sin^2y)) * (1+z+z^2/2+x^3/3+z^4/4)" << endl;
	cout << "Заданием были заданы следующие параметры : x =" << x << "; y= " << y << "; z =" << z << endl;
	cout.precision(5);
	cout << "При заданных парметрах функция будет равна w =" << func(x, y, z); cout << endl;

	cout << "Вы можете ввести свои значения: x= "; cin >> x; cout << "y = "; cin >> y; cout << "z = "; cin >> z; cout << endl;
	cout << "При заданных парметрах функция будет равна w =" << func(x, y, z); cout << endl;
    return 0;

	
}



