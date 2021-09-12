/*if20. На числовой оси расположены три точки:
A, B, C. Определить, какая из двух последних точек
(B или C) расположена ближе к A, и вывести эту
точку и ее расстояние от точки A.*/

#include "../if.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	int C = get_n("C");
	
	cout << endl;
	if (abs(A - B) < abs(A - C))
		cout << "B: " << B;
	else
		cout << "C: " << C;

	exit();
}