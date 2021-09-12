/*if7. Даны два числа. Вывести порядковый номер
меньшего из них.*/

#include "../if.h"

const int qty_n = 2;

int main()
{
	vector<int> n_s = numbers_vector(qty_n);
	vector<int> n_s_copy = n_s;
	sort(n_s_copy.begin(), n_s_copy.end());

	for (int i = 0; i < n_s.size(); ++i)
		if (n_s_copy[0] == n_s[i])
			cout << i + 1;

	exit();
}