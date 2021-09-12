/*���� ��� ����� �����: A, B, C. ���������
���������� ������������: "����� ��� �� �����
A, B, C �������� ��������������".*/

#include "../boolean.h"

const int qty_lets = 3;

int main()
{
	vector<int> lets;
	try
	{
		lets = numbers_vector(qty_lets);
	}
	catch (string error)
	{
		cout << "������: " << error << ".\n";
	}

	int qty_positive = 0;
	for (int i = 0; i < qty_lets; ++i)
		if (lets[i] > 0)
			qty_positive++;

	if (qty_positive == 2)
		print_bool(true);
	else
		print_bool(false);

	exit();
}