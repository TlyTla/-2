#include<Windows.h>
#include<iostream>
#include<vector>

std::vector<int> whole;
std::vector<double> fractive;
std::vector<char> lines;

void Start();
void MenuVector();
void ActionMenu();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Start();

	return 0;
}

void Start()
{
	while (true);
	{
		int number;

		std::cout << "1 - ������ int. \n2 - ������ double.\n3 - ������ char.\n0 - ��������� ���������\n\n����� ������ �������: ";
		std::cin >> number;

		if (number == 0)
		{

		}
		else if (number == 1)
		{

		}
		else if (number == 2)
		{

		}
		else if (number == 3)
		{

		}
		else
		{
			std::cout << "������ �����";
		}
	}
}

void MenuVector()
{

}
