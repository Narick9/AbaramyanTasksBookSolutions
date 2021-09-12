/*Дано четырехзначное число. Проверить истинность
высказывания: "Данное число читается одинаково
слева направо и справа налево".*/

#include "../boolean.h"

int main()
{
	int n = get_n("n");
	vector<int> nums = nums_of_n(n);
	vector<int> nums_copy = reverse(nums);
	print_bool(nums == nums_copy);

	exit();
}