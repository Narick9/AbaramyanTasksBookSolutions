/*���� ��� ����� �����: A, B, C. ���������
���������� ������������: "����� ���� �� �����
A, B, C �������������".*/

#include "../boolean.h"

int main()
{
	//���������� �����
	int qty_positive = 0; 
	for (int i = 65; i < 65 + 3; ++i)
	{
		int n = get_n(char(i));
		if (n > 0)
			qty_positive++;
	}

	if (qty_positive == 1)
		print_bool(true);
	else
		print_bool(false);


	exit();
}