/*Дни недели пронумерованы следующим образом:
1 - понедельник, 2 - вторник, ..., 6 - суббота,
7 - воскресенье. Дано целое число K, лежащее 
в диапозоне 1-365. Определить номер дня недели
для K-го дня года, если известно, что в этом
году 1 января было субботой.*/

#include <iostream>

using namespace std;

const int days_in_week = 7;
const int start_day = 6;

int main()
{
	int K;
	cin >> K;
	int ans = (K - 2 + start_day)
		% days_in_week + 1;	// отсчёт с нуля
	cout << ans;

	cout << "\n\n";
	system("pause");
}