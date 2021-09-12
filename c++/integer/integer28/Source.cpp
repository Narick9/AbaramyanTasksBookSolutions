/*��� ������ ������������� ��������� �������:
1 - �����������, 2 - �������, ..., 6 - �������,
7 - �����������. ���� ����� ����� K, ������� �
��������� 1-365, � ����� ����� N, ������� �
��������� 1-7. ���������� ����� ��� ������ ���
K-�� ��� ����, ���� ��������, ��� � ���� ����
1 ������ ���� ���� ������ � ������� N.*/

#include <iostream>

using namespace std;

const int days_in_week = 7;

int main()
{
	int K, N;
	cout << "K: ";
	cin >> K;
	cout << "N: ";
	cin >> N;
	int ans = (K + N - 2)
		% days_in_week + 1;	// ������ � ����
	cout << ans;

	cout << "\n\n";
	system("pause");
}