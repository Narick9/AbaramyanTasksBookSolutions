/*if6. ���� ��� �����. ������� ������� �� ���.*/

#include "../if.h"

int main()
{
	int n1 = get_n("n1");
	int n2 = get_n("n2");

	if (n1 >= n2)
		cout << n1;
	else
		cout << n2;

	exit();
}

