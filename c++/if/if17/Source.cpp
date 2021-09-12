/*if17. Даны три переменные вещественного типа:
A, B, C. Если их значения упорядочены по
возрастанию или убыванию, то удвоить их; в
противном случае заменить значение каждой
переменной на противоположное. Вывести новые
значения переменных A, B, C.*/

#include "../if.h"

const int qty_n = 3;

int main()
{
	vector<int> numbers = numbers_vector(qty_n);
	vector<int> numbers_copy = numbers;
	sort(numbers_copy.begin(), numbers_copy.end());

	if (numbers == numbers_copy
		|| numbers == reverse(numbers_copy))
		for (int i = 0; i < numbers.size(); ++i)
			numbers[i] *= 2;
	else
		for (int i = 0; i < numbers.size(); ++i)
			numbers[i] = -numbers[i];

	cout << endl;
	print_vector_int(numbers);

	exit();
}