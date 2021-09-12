/*Дано трехзначное число. Проверить истинность
высказывания: "Цифры данного числа образуют
возрастающую или убывающую последовательность".*/

#include "../boolean.h"
#include <algorithm>

int main()
{
	int n = get_n("n");
	vector<int> nums = nums_of_n(n);
	vector<int> nums_plus = nums;
	sort(nums_plus.begin(), nums_plus.end());
	vector<int> nums_minus = reverse(nums_plus);

	print_bool(!same_nums(nums).size()
	&& (nums == nums_plus || nums == nums_minus));

	exit();
}