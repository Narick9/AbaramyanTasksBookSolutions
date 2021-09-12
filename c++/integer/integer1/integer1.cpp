/*Дано расстояние L в сантиметрах. Используя
операцию деления нацело, найти количество
полных метров в нем (1 метр = 100 см).*/

#include <iostream>

using namespace std;

const int cm_in_m = 100;

int main()
{
	int L;
	std::cin >> L;
	int m = L / cm_in_m;
	cout << m << endl;

	system("pause");
}