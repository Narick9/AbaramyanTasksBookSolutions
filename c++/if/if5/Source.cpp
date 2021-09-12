/*Даны три целых числа. Найти количество
положительных и количество отрицательных чисел
в исходном наборе.*/

#include "../if.h"

const int qty_n = 3;

int main()
{
	vector<int> ns = numbers_vector(qty_n);
	int qty_positive = 0;
	int qty_negative = 0;

	for (int x : ns)
		if (x > 0)
			qty_positive++;
		else if (x < 0)
			qty_negative++;
	
	cout << "qty_positive: " << qty_positive << endl;
	cout << "qty_negative: " << qty_negative << endl;

	exit();
}