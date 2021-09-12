/*Дано целое число A. Проверить истинность
высказывания: "Число A является положительным".*/

#include <iostream>

using namespace std;

int main()
{
	int A;
	cin >> A;
	if (A > 0)
		cout << "TRUE";
	else
		cout << "FALSE";

	cout << "\n\n";
	system("pause");
}