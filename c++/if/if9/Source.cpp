/*���� ��� ���������� ������������� ����: A, B.
���������������� �������� ������ ���������� ���,
����� � A ��������� ������� �� ��������, �
� B - �������. ������� ����� �������� ����������
A � B.*/

#include "../if.h"

const int qty_n = 2;

int main()
{
	vector<int> n_s = numbers_vector(qty_n);
	sort(n_s.begin(), n_s.end());

	print_vector_int(n_s);

	exit();
}