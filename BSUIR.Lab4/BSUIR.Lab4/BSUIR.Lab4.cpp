// BSUIR.Lab4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>


void massive(double **mass,int n,int m) {
	int  min_id = 0, min_id2 = 0;
	double min, first;
	min = mass[0][0];
	for (int i = 0; i<n; i++)
		for (int j=0; j < m; j++) {
			if (mass[i][j] < min) {
				min = mass[i][j];
				min_id = i; min_id2 = j;
			}
		}
	first=mass[0][0] ;
	mass[0][0] = min;
	mass[min_id][min_id2] = first;

}

int main()
{
	int n, m;
	
	setlocale(LC_ALL, "russian");
	std::cout << "Задание:Найти минимальный элемент и поменять его с первым элементом." << std::endl;
	std::cout << "Введите значения n и m  определяющие размерность массива:" << std::endl;
	std::cin >> n;
	std::cin >> m;
	double **mass = new double*[n];
	for (int i = 0; i < n; i++) {
		mass[i] = new double[m];
	}
	std::cout << "Введите элементы массива:" << std::endl;
	for(int i=0;i<n;i++)
		for (int j=0; j < m; j++) {
			std::cin >> mass[i][j];
		}
	
		std::cout << "Ваш массив:" << std::endl;
	for (int i = 0; i<n; i++)
		for (int j=0; j < m; j++) {
			std::cout << " " << mass[i][j];
		}
	std::cout << std::endl;

	massive(mass,n,m);
	std::cout << "Новый массив :" << std::endl;
	for (int i = 0; i<n; i++)
		for (int j=0; j < m; j++) {
			std::cout << " "<< mass[i][j];
		}
	std::cout << std::endl;

	delete []mass;
    return 0;
}

