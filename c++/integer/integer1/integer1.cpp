/*���� ���������� L � �����������. ���������
�������� ������� ������, ����� ����������
������ ������ � ��� (1 ���� = 100 ��).*/

#include <iostream>

using namespace std;

const int cm_in_m = 100;

int main()
{
	int L;
	std::cin >> L;
	int m = L / cm_in_m;
	cout << m << endl;

	system("pause");
}