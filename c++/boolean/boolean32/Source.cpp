/*���� ����� ����� a, b, c, ���������� ���������
���������� ������������. ��������� ����������
������������: "����������� �� ��������� a, b, c
�������� �������������".*/

#include "../boolean.h"
#include <algorithm>

const int qty_n = 3;

int main()
{
	vector<int> nums = numbers_vector(qty_n);
	sort(nums.begin(), nums.end());

	print_bool(pow(nums[2], 2) == 
		pow(nums[0], 2) + pow(nums[1], 2));

	exit();
}