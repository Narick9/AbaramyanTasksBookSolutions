/*Даны две переменные вещественного типа: A, B.
Перераспределить значения данных переменных так,
чтобы в A оказалось меньшее из значений, а
в B - большее. Вывести новые значения переменных
A и B.*/

#include "../if.h"

const int qty_n = 2;

int main()
{
	vector<int> n_s = numbers_vector(qty_n);
	sort(n_s.begin(), n_s.end());

	print_vector_int(n_s);

	exit();
}