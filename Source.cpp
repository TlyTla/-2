#include<Windows.h>
#include<iostream>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int const size = 5;
	int Arr1[size][size]{};
	int number1;

	std::cout << "Задание 1: ";
	std::cout << "Введите число: \n";
	std::cin >> number1;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			Arr1[i][j] = number1;
			number1 *= 2;
			std::cout << Arr1[i][j] << "\t\t\t";
		}
		std::cout << "\n";
	}

	int Arr2[size][size]{};
	int number2;

	std::cout << "Задание 2: ";
	std::cout << "Введите число: \n";
	std::cin >> number2;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			Arr2[i][j] = number2;
			number2 = Arr2[i][j] + 1;
			std::cout << Arr2[i][j] << "\t\t\t";
		}
		std::cout << "\n";
	}


	return 0;
}