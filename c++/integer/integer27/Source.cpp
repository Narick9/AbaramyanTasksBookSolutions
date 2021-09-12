/*��� ������ ������������� ��������� �������:
1 - �����������, 2 - �������, ..., 6 - �������,
7 - �����������. ���� ����� ����� K, ������� 
� ��������� 1-365. ���������� ����� ��� ������
��� K-�� ��� ����, ���� ��������, ��� � ����
���� 1 ������ ���� ��������.*/

#include <iostream>

using namespace std;

const int days_in_week = 7;
const int start_day = 6;

int main()
{
	int K;
	cin >> K;
	int ans = (K - 2 + start_day)
		% days_in_week + 1;	// ������ � ����
	cout << ans;

	cout << "\n\n";
	system("pause");
}