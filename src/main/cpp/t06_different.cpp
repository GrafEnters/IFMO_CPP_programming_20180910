//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
	int n, a = 10000000, aprev, adif = 0, k = 0;
	cin >> n;
	while (!(k == n)) {
		aprev = a;
		cin >> a;
		if (!(a == aprev)) adif++;
		k++;
	}
	cout << adif;
}
