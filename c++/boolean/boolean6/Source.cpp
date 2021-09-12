/*Даны три целых числа: A, B, C. Проверить
истинность высказывания: "Справедливо двойное
неравенство A < B < C".*/

#include "../boolean.h"

int main()
{
	int A = get_n("A");
	int B = get_n("B");
	int C = get_n("C");
	print_bool((A < B) && (B < C));

	exit();
}