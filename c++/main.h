#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// �����

void exit()	//��������� ��������� � ����������
{
	cout << "\n\n";
	system("pause");
}

void error(string error)	//������� ��������� �� ������
{
	cout << "\n\n������: " << error << ".\n\n";
}

// ����

int get_n(string name)	//������� ����� � ���������� �����
{
	int n;
	cout << name << ": ";
	cin >> n;
	return n;
}

int get_n(char let)	//������� ����� � ���������� �����
{
	int n;
	cout << let << ": ";
	cin >> n;
	return n;
}

vector<int> numbers_vector(int qty)	//������� ������� �� ���������� � ���������� ������ � �������
{
	if (!(qty >= 1 && qty <= 23))
		throw "�������� ���������� ����";
	vector<int> list;
	for (int i = 65; i < 65 + qty; ++i)
	{
		int n = get_n(char(i));
		list.push_back(n);
	}

	return list;
}

// �����

void print_vector_int(vector<int> n)	// ������� ���������� ������� �� ����� �� ����������� �������
{
	for (int i = 0; i < n.size() && i < 26; ++i)
		cout << char(i + 65) << ": " << n[i] << endl;
}

// �����

int digit(int n) //���������� ���������� ���� � ����� �����
{
	int digit = 0;

	while (n)
	{
		n /= 10;
		digit++;
	}

	return digit;
}

vector<int> nums_of_n(int n)	//���������� ������ � ������� �����
{
	vector<int> nums;
	int num = 0;
	int del = 0;

	for (int i = digit(n); i > 0; --i)
	{
		num = 0;
		if (i - 1 > 0)
		{
			del = pow(10, i - 1);
			num = n / del;
			n -= num * del;
			nums.push_back(num);
		}
		else
			nums.push_back(n % 10);
	}
	return nums;
}

int n_of_nums(vector<int> orig)	//���������� ����� �� ���� �������
{
	int n = 0;
	int digit = orig.size();
	for (int i = 0; i < digit; ++i)
	{
		n += orig[i] * pow(10, digit - 1 - i);
	}

	return n;
}

vector<int> same_nums(vector<int> orig)	//���������� ������ � ����������� ������� �������
{
	vector<int> copy_orig = orig;
	vector<int> sames;

	for (int i = 0; i < orig.size(); ++i)
		for (int k = 0; k < copy_orig.size(); ++k)
			if (i == k)
				continue;
			else if (orig[i] == copy_orig[k])
				sames.push_back(orig[i]);

	return sames;
}

vector<int> reverse(vector<int> orig) //�������������� ������ �����
{
	vector<int> reverse_v;

	for (int i = orig.size(); i > 0; --i)
		reverse_v.push_back(orig[i - 1]);

	return reverse_v;
}



// ����������

int get_coor()	//���������� � ������������ ���������� � ���������� �� � ���� ������
{
	int x = get_n("x");
	int y = get_n("y");
	int coor(x, y);
	return coor;
}

int len(int x, int y, int x1, int y1)	//��������� ���������� � ���������� �����
{
	int len = sqrt(pow(x - x1, 2) + pow(y - y1, 2));
	return len;
}

int len(int coor1[], int coor2[])	//��������� ���������� � ���������� �����
{
	int len = sqrt(pow(coor1[0] - coor2[0], 2) + pow(coor1[1] - coor2[1], 2));
	return len;
}
