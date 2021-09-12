/*Дано трехзначное число. Вывести число,
полученное при прочтении исходного числа
справа налево.*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ed = n % 10;
	int des = (n / 10) % 10;
	int sot = n / 100;
	int ans = sot + des * 10 + ed * 100;
	cout << "ans: " << ans;

	cout << "\n\n";
	system("pause");
}