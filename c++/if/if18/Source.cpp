/*if18. Даны три целых числа, одно из которых
отлично от двух других, равных между собой.
Определить порядковый номер числа, отличного от 
остальных.*/

#include "../if.h"

const int qty_n = 3;

int main()
{
	vector<int> numbers = numbers_vector(qty_n);
	int ans = -1;
	int buffer = -1;
	
	for (int i = 1; i < numbers.size(); ++i)
		if (numbers[0] != numbers[i])
		{
			buffer = i;
			break;
		}

	if (buffer > 1)
		ans = buffer;
	else if (numbers[0] == numbers[2])
		ans = buffer;
	else
		ans = 0;

	cout << ans + 1;

	exit();
}