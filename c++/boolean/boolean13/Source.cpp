/*���� ��� ����� �����: A, B, C. ���������
���������� ������������: "���� �� ���� �� �����
A, B, C �������������".*/

#include "../boolean.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	int C = get_n("C");
	print_bool(A > 0 || B > 0 || C > 0);

	exit();
}