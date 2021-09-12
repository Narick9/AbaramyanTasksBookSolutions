/*ƒаны числа A, B, C (число A не равно 0).
–ассотрев дискриминант D = B^2 - 4*A*C, проверить
истинность высказывани€: " вадратное уравнение
A*x^2 + B*x + C = 0 имеет вещественные корни".*/

#include "../boolean.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	int C = get_n("C");
	
	int D = pow(B, 2) - 4 * A * C;
	print_bool(D >= 1);

	exit();
}