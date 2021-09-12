/*С начала суток прошло N скунд (N - целое).
Найти количество полных минут, прошедших
с начала суток.*/

#include <iostream>

using namespace std;

const int sec_in_min = 60;

int main()
{
	int N;
	cin >> N;
	int min = N / sec_in_min;
	cout << min;

	cout << "\n\n";
	system("pause");
}