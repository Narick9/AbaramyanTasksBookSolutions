/*Дни недели пронумерованы следующим образом:
0 - воскресенье, 1 - понедельник, 2 - вторник,
..., 6 - суббота. Дано целое число K, лежащее
в диапахоне 1-365. Определить номер дня недели
для K-го дня года, если известно, что в этом
году 1 января было четвергом.*/

#include <iostream>

using namespace std;

const int days_in_week = 7;
const int start_day = 4;

int main()
{
	int K;
	cin >> K;
	int ans = (K - 1 + start_day) 
		% days_in_week;		// отсчёт с нуля
	cout << ans;

	cout << "\n\n";
	system("pause");
}