/*���� ��� ����� �����: A, B. ���������
���������� ������������: "�����������
����������� A >= 0 ��� B < -2".*/

#include "../boolean.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	print_bool(A >= 0 || B < -2);

	exit();
}