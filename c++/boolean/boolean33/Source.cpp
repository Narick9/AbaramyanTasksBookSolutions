/*Даны целые числа a, b, c. Проверить истинность
высказывания: "Существует треугольник со
сторонами a, b, c".*/

#include "../boolean.h"
#include <algorithm>

const int qty_n = 3;

int main()
{
	vector<int> nums = numbers_vector(3);
	sort(nums.begin(), nums.end());

	int sum = 0;
	for (int i = 0; i < nums.size() - 1; ++i)
		sum += nums[i];

	print_bool(sum < nums[nums.size() - 1]);

	exit();
}