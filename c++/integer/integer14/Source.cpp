/*���� ����������� �����. � ��� ����������
������ ������ ����� � ��������� � �����.
������� ���������� �����.*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ed = n % 10;
	int ans = (n - ed) / 10 + ed * 100;
	cout << ans;

	cout << "\n\n";
	system("pause");
}