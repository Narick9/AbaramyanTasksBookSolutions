/*� ������ ����� ������ N ������ (N - �����).
����� ���������� ������, ���������
� ������ ��������� ������.*/

#include <iostream>

using namespace std;

const int sec_in_min = 60;

int main()
{
	int N;
	cin >> N;
	int ans = N % sec_in_min;
	cout << ans;

	cout << "\n\n";
	system("pause");
}