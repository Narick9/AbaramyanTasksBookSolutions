/*� ������ ����� ������ N ������ (N - �����).
����� ���������� ������ �����, ���������
� ������ �����.*/

#include <iostream>

using namespace std;

const int sec_in_hour = 3600;

int main()
{
	int N;
	cin >> N;
	int ans = N / sec_in_hour;
	cout << ans;

	cout << "\n\n";
	system("pause");
}