/*���� ����� A, B, C (����� A �� ����� 0).
��������� ������������ D = B^2 - 4*A*C, ���������
���������� ������������: "���������� ���������
A*x^2 + B*x + C = 0 ����� ������������ �����".*/

#include "../boolean.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	int C = get_n("C");
	
	int D = pow(B, 2) - 4 * A * C;
	print_bool(D >= 1);

	exit();
}