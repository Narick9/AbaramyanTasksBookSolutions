/*���� ��� �����. ������� ������� �������, � �����
������� �� ���.*/

#include "../if.h"

const int qty_n = 2;

int main()
{
	vector<int> n_s = numbers_vector(qty_n);
	vector<int> n_s_copy = n_s;
	sort(n_s_copy.begin(), n_s_copy.end());

	cout << n_s_copy[n_s_copy.size() - 1] << endl;
	cout << n_s_copy[0] << endl;

	exit();
}