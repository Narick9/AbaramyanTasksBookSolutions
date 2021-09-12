/*if4. ƒаны три целых числа. Ќайти количество
положительных чисел в исходном наборе.*/

#include "../if.h"

const int qty_n = 3;

int main()
{
	vector<int> nums = numbers_vector(qty_n);
	int qty_positive = 0;
	
	for (int x : nums)
		if (x > 0)
			qty_positive++;

	cout << qty_positive;

	exit();
}