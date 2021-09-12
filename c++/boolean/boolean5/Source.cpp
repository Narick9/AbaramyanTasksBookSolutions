/*Даны два целых числа: A, B. Проверить
истинность высказывания: "Справедливы
неравенства A >= 0 или B < -2".*/

#include "../boolean.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	print_bool(A >= 0 || B < -2);

	exit();
}