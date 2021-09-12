/*Дано трехзначное число. В нем зачеркнули
первую справа цифру и приписали её слева.
Вывести полученной число.*/

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