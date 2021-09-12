/*Дано целое число A. Проверить истинность
высказывания: "Число A является нечетным".*/

#include "boolean.h"

using namespace std;

int main()
{
	int A = get_n("A");
	print_bool(A % 2);

	exit();
}