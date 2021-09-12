/*Даны три целых числа: A, B, C. Проверить
истинность высказывания: "Ровно два из чисел
A, B, C являются положительными".*/

#include "../boolean.h"

const int qty_lets = 3;

int main()
{
	vector<int> lets;
	try
	{
		lets = numbers_vector(qty_lets);
	}
	catch (string error)
	{
		cout << "Ошибка: " << error << ".\n";
	}

	int qty_positive = 0;
	for (int i = 0; i < qty_lets; ++i)
		if (lets[i] > 0)
			qty_positive++;

	if (qty_positive == 2)
		print_bool(true);
	else
		print_bool(false);

	exit();
}