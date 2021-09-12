/*С начала суток прошло N секунд (N - целое).
Найти количество полных часов, прошедших
с начала суток.*/

#include <iostream>

using namespace std;

const int sec_in_hour = 3600;

int main()
{
	int N;
	cin >> N;
	int ans = N / sec_in_hour;
	cout << ans;

	cout << "\n\n";
	system("pause");
}