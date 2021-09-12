/*ƒни недели пронумерованы следующим образом:
1 - понедельник, 2 - вторник, ...,
6 - суббота, 7 - воскресенье. ƒано целое число K,
лежащее в диапазоне 1-365. ќпределить номер дн€
недели дл€ K-го дн€ года, если известно, что
в этом году 1 €нвар€ было вториком.*/

#include <iostream>

using namespace std;

const int days_in_week = 7;
const int start_day = 2;

int main()
{
	int K;
	cin >> K;
	int ans = (K + start_day)
		% days_in_week - 1;
	cout << ans;

	cout << "\n\n";
	system("pause");
}