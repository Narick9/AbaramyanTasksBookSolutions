/*Дан размер файла в байтах. Используя 
операцию деления нацело, найти количество
полных килобайтов, которые заниает данный
файл (1 килобайт = 1024 байта).*/

#include <iostream>

using namespace std;

const int B_in_KB = 1024;

int main()
{
	int B;
	cin >> B;
	int KB = B / B_in_KB;
	cout << KB;

	cout << "\n\n";
	system("pause");
}