/*if13. ƒаны три числа. Ќайти среднее из них
(то есть число, расположенное между наименьшим и
наибольшим).*/

#include "../if.h"

const int qty_n = 3;

int main()
{
	vector<int> n_s = numbers_vector(qty_n);
	vector<int> n_s_copy = n_s;
	sort(n_s_copy.begin(), n_s_copy.end());

	cout << n_s_copy[1];

	exit();
}