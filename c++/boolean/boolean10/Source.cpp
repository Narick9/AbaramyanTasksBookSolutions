/*Даны два целых числа: A, B. Проверить истинность
высказывания: "Ровно одно из чисел A и B 
нечетное".*/

#include "../boolean.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	print_bool(A % 2 xor B % 2);

	exit();
}