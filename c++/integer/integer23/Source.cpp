/*� ������ ����� ������ N ������ (N - �����).
����� ���������� ������ �����, ���������
� ������ ���������� ����.*/

#include <iostream>

using namespace std;

const int min_in_hour = 60;
const int sec_in_min = 60;

int main()
{
	int N;
	cin >> N;
	int min = N / sec_in_min;
	int ans = min % min_in_hour;
	cout << ans;

	cout << "\n\n";
	system("pause");
}