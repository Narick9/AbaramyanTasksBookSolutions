/*if17. ���� ��� ���������� ������������� ����:
A, B, C. ���� �� �������� ����������� ��
����������� ��� ��������, �� ������� ��; �
��������� ������ �������� �������� ������
���������� �� ���������������. ������� �����
�������� ���������� A, B, C.*/

#include "../if.h"

const int qty_n = 3;

int main()
{
	vector<int> numbers = numbers_vector(qty_n);
	vector<int> numbers_copy = numbers;
	sort(numbers_copy.begin(), numbers_copy.end());

	if (numbers == numbers_copy
		|| numbers == reverse(numbers_copy))
		for (int i = 0; i < numbers.size(); ++i)
			numbers[i] *= 2;
	else
		for (int i = 0; i < numbers.size(); ++i)
			numbers[i] = -numbers[i];

	cout << endl;
	print_vector_int(numbers);

	exit();
}