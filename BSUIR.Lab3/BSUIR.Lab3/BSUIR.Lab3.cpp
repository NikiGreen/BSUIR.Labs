// BSUIR.Lab3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double mass [10] ;
	double first=0,second=0,sum=0;
	setlocale(LC_ALL, "russian");
	std::cout << "Задание:Вычислить сумму элементов массива, расположенных между \n первым и последним положительными элементами." << std::endl;
	std::cout << "Введите 10 элементов массива:" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cin >> mass[i];
	}
	std::cout <<std::endl;
	std::cout <<"Ввёденный массив:";
	for (int i = 0; i < 10; i++) {
		std::cout << " " << mass[i];
	}
	std::cout << std::endl;
	//Начало
	for (int i = 0; i < 10; i++) {
		if (mass[i] > 0) {
			first = i;
			break;
		}
	}
	//Конец
	for (int i = 9; i >= 0; i--) {
		if (mass[i] > 0) {
			second = i;
			break;
		}
	}
	for (int i = first; i <= second; i++) {
		sum += mass[i];
	}
	std::cout << "Сумма элементов между первым и последним положительным числом =" << sum << std::endl;
    return 0;
}

