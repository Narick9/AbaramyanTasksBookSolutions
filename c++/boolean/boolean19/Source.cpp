/*Проверить истинность высказывания: "Среди трех
данных целых чисел есть хотя бы одна пара взаимно
противоположных".*/

#include "../boolean.h"

int main()
{
	vector<int> list = numbers_vector(3);
	vector<int> copy_list = list;

	int opposite = 0;
	for (int i = 0; i < list.size(); i++)
	{
		for (int k = 0; k < copy_list.size(); k++)
		{
			if (i == k)
				continue;
			if (list[i] + copy_list[k] == 0)
				opposite++;
		}
	}

	print_bool(opposite);


	exit();
}