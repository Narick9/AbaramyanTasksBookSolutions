/*���� ��� ����� �����: A, B. ���������
���������� ������������: "���� �� ���� �� �����
A � B ��������".*/

#include "../boolean.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	print_bool(A % 2 || B % 2);

	exit();
}