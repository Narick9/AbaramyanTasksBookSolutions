/*if 15. Даны три числа. Найти сумму двух
наибольших из них.*/

#include "../if.h"

const int qty_n = 3;
const int most_n = 2;

int main()
{
	vector<int> n_s = numbers_vector(qty_n);
	vector<int> n_s_copy = n_s;
	sort(n_s_copy.begin(), n_s_copy.end());

	int sum = 0;
	for (int i = 0; i < most_n; ++i)
		sum += n_s_copy[n_s_copy.size() - 1 - i];

	cout << sum;

	exit();
}