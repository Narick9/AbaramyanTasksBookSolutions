/*if20. �� �������� ��� ����������� ��� �����:
A, B, C. ����������, ����� �� ���� ��������� �����
(B ��� C) ����������� ����� � A, � ������� ���
����� � �� ���������� �� ����� A.*/

#include "../if.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	int C = get_n("C");
	
	cout << endl;
	if (abs(A - B) < abs(A - C))
		cout << "B: " << B;
	else
		cout << "C: " << C;

	exit();
}