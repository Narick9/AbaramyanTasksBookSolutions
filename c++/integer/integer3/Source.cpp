/*��� ������ ����� � ������. ��������� 
�������� ������� ������, ����� ����������
������ ����������, ������� ������� ������
���� (1 �������� = 1024 �����).*/

#include <iostream>

using namespace std;

const int B_in_KB = 1024;

int main()
{
	int B;
	cin >> B;
	int KB = B / B_in_KB;
	cout << KB;

	cout << "\n\n";
	system("pause");
}