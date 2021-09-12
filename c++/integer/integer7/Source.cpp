/*Дано двузначное число. Найти сумму и 
произведение его цифр.*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = n / 10 + n % 10;
	int umn = (n / 10) * (n % 10);
	cout << "sum: " << sum << endl;
	cout << "umn: " << umn << endl;

	cout << "\n\n";
	system("pause");
}