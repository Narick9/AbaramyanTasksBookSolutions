/*���� ���������� �����. ������� �����,
���������� ��� ������������ ���� ��������� 
�����.*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ed = n % 10;
	int des = n / 10;
	int ans = ed * 10 + des;
	cout << ans;

	cout << "\n\n";
	system("pause");
}