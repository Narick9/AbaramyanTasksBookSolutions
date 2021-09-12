/*Даны два целых числа: A, B. Проверить
истинность высказывания: "Числа A и B имеют
одинаковую четность".*/

#include "../boolean.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	print_bool( !((A + B) % 2) );

	exit();
}