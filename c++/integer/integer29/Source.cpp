/*ƒаны целые положительные числа A, B, C.
Ќа пр€моугольнике размера A x B размещено
максимально возможное количество квадратов
со стороной C (без наложений). Ќайти количество
квадратов, размещенных на пр€моугольнике, а
также площадь незан€той части пр€моугольника.*/

#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;
	int n_square = (A / C) * (B / C);
	int S_unus = (A * B) %
		(n_square * C * C);
	cout << "n_square: " << n_square << endl;
	cout << "S_unus: " << S_unus << endl;

	cout << "\n\n";
	system("pause");
}