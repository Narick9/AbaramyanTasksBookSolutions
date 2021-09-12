/*Дано трехначное число. Найти сумму и
произведение его цифр.*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ed = n % 10;
	int des = (n / 10) % 10;
	int sot = n / 100;
	int sum = ed + des + sot;
	int umn = ed * des * sot;
	cout << "sum: " << sum << endl;
	cout << "umn: " << umn << endl;

	cout << "\n\n";
	system("pause");
}