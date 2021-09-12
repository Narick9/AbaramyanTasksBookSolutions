/*Дано трехзначное число. Используя одну
операцию деления нацело, вывести первую цифру
данного числа (сотни).*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = n / 100;
	cout << ans;

	cout << "\n\n";
	system("pause");
}