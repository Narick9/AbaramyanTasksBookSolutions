/*���� ����� M � �����������. ���������
�������� ������� ������, ����� ����������
������ ���� � ��� (1 ����� = 100 ��).*/

#include <iostream>

using namespace std;

const int kg_in_ton = 1000;

int main()
{
	int M;
	cin >> M;
	int T = M / kg_in_ton;
	cout << T;

	cout << "\n\n";
	system("pause");
}