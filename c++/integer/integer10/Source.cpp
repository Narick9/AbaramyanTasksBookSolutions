/*���� ����������� �����. ������� ������� ���
��������� ����� (�������), � ����� - ���
������� ����� (�������).*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ed = n % 10;
	int des = (n / 10) % 10;
	cout << "ed: " << ed << endl;
	cout << "des: " << des << endl;

	cout << "\n\n";
	system("pause");
}