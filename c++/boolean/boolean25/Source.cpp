/*���� ����� x, y. ��������� ����������
������������: "����� � ������������ (x, y)
����� �� ������ ������������ ��������".*/

#include "../boolean.h"

int main()
{
	int x = get_n("x");
	int y = get_n("y");

	print_bool(x < 0 && y > 0);

	exit();
}