/*��� ������ ������������� ��������� �������:
0 - �����������, 1 - �����������, 2 - �������,
..., 6 - �������. ���� ����� ����� K, �������
� ��������� 1-365. ���������� ����� ��� ������
��� K-�� ��� ����, ���� ��������, ��� � ����
���� 1 ������ ���� ���������.*/

#include <iostream>

using namespace std;

const int days_in_week = 7;
const int start_day = 4;

int main()
{
	int K;
	cin >> K;
	int ans = (K - 1 + start_day) 
		% days_in_week;		// ������ � ����
	cout << ans;

	cout << "\n\n";
	system("pause");
}