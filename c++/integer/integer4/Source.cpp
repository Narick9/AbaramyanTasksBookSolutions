/*���� ����� ������������� ����� A � B (A > B).
�� ������� ����� A ��������� �����������
��������� ���������� �������� ����� B 
(��� ���������). ��������� �������� �������
������, ����� ���������� �������� B, �����������
�� ������� A.*/

#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	int ans = A / B;
	cout << ans;

	cout << "\n\n";
	system("pause");
}