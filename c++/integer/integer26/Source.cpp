/*��� ������ ������������� ��������� �������:
1 - �����������, 2 - �������, ...,
6 - �������, 7 - �����������. ���� ����� ����� K,
������� � ��������� 1-365. ���������� ����� ���
������ ��� K-�� ��� ����, ���� ��������, ���
� ���� ���� 1 ������ ���� ��������.*/

#include <iostream>

using namespace std;

const int days_in_week = 7;
const int start_day = 2;

int main()
{
	int K;
	cin >> K;
	int ans = (K + start_day)
		% days_in_week - 1;
	cout << ans;

	cout << "\n\n";
	system("pause");
}