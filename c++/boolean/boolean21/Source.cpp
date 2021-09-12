/*Дано трехзначное число. Проверить истинность
высказывания: "Цифры данного числа образуют
возрастающую последовательность".*/

#include "../boolean.h"
#include <algorithm>

int main()
{
	int n = get_n("n");
	vector<int> nums = nums_of_n(n);
	vector<int> copy_nums = nums;
	sort(copy_nums.begin(), copy_nums.end());

	print_bool(!same_nums(nums).size()
		&& copy_nums == nums);

	exit();
}