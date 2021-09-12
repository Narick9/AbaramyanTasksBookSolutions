/*Дано трехзначное число. Вывести число,
полученное при перестановке цифр сотен
и десятков исходного числа (например,
123 перейдёт в 213).*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sot = n / 100;
	int des = (n - sot * 100) / 10;
	int ans = n - sot * 100 - des * 10 + 
		sot * 10 + des * 100;
	cout << ans;

	cout << "\n\n";
	system("pause");
}