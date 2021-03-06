// BSUIR.Lab 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>

double first(double r,double m) {
	return ((4 * r + 3 * m) / (pow(r, 3) + pow(m, 2)))*pow(sin(pow(m, 3)), 2);
}

double second(double r, double m) {
	return sqrt(abs(r - m))*pow(cos(pow(r, 2)), 3);
}

int main()
{
	double r, m,rez;
	setlocale(LC_ALL, "russian");

	std::cout << "Решите функцию исходя из следующих условий:" << std::endl;
	std::cout << "При 0.5<abs(r) && abs(r)<abs(m)+0.5:функция=((4 * r + 3 * m) / (pow(r, 3) + pow(m, 2)))*pow(sin(pow(m, 3)), 2)" << std::endl;
	std::cout << "При abs(r) > abs(m) + 0.5:функция=sqrt(abs(r - m))*pow(cos(pow(r, 2)), 3)" << std::endl;
	std::cout << "Введите m и n  для подсчёта результата функции:" << std::endl;
	std::cout << "m=";
	std::cin >> m ;
	std::cout << std::endl;
	std::cout << "r=";
	std::cin >> r;
	std::cout << std::endl;

	if (0.5<abs(r) && abs(r)<abs(m)+0.5) {
		rez=first(r, m);
		std::cout << "Ответ равен =" << rez << std::endl;
	}
	else
		if (abs(r) > abs(m) + 0.5) {
			rez=second(r, m);
			std::cout << "Ответ =" << rez << std::endl;
		}
		else std::cout << "Введённые значения не могут привести к решению фукнции.";

	
    return 0;
}

