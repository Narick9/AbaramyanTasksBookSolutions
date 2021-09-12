/*ѕроверить истинность высказывани€: "—реди
трех данных целых чисел есть хот€ бы одна
пара совпадающих".*/

#include "../boolean.h"

const int qty_n = 3;

int main()
{
	vector<int> list = numbers_vector(qty_n);

	int same = 0;
	vector<int> copy_list = list;
	for (int i = 0; i < list.size(); i++)
	{
		for (int k = 0; k < copy_list.size(); k++)
		{
			if (i == k)
				continue;
			if (list[i] == copy_list[k])
				same++;
		}
	}

	print_bool(same);

	exit();
}