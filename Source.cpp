#include<iostream>
#include<Windows.h>
#include<cstdlib>
#include<string>

void god(int data1[], int data2[])
{
	int raz = 0;
	raz = (data2[2] * 12 * 366 + (data2[1] * 30 - 30) + data2[0]) - (data1[2] * 12 * 366 + (data1[1] * 30 - 30) + data1[0]);
	std::cout << "разница в днях: " << raz;
	std::cout << std::endl;

	if (data1[2] % 4 == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			std::cout << data1[i] << ".";
		}
		std::cout << "\nгод является высокосным.\n";
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			std::cout << data1[i] << ".";
		}
		std::cout << "\nгод не является высокосным.\n";
	}
	if (data2[2] % 4 == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			std::cout << data2[i] << ".";
		}
		std::cout << "\nгод является высокосным.\n";
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			std::cout << data2[i] << ".";
		}
		std::cout << "\nгод не является высокосным.\n";
	}

}


void arifmet(int arr[])
{
	float sum = 0;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		sum += arr[i];
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout<< "среднее арифметическое: " << sum / 10;

}

void fyn(int mass[])
{
	int zero = 0, plus= 0, minus = 0;
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 100 - 50;
		std::cout << mass[i]<< " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (mass[i] == 0)
		{
			zero += 1;
		}
		if (mass[i] < 0)
		{
			minus += 1;
		}
		if (mass[i] > 0)
		{
			plus += 1;
		}
	}
	std::cout << "количество нулей: " << zero << "\nколичество отрицательных: " << minus << "\nколитчество положительных: " << plus;

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int const size = 10;

	std::cout << "задание 1\n";

	int data1[size]{}, data2[size]{};

	std::cout << "введите первую дату: ";

	for (int i = 0; i < 3; i++)
	{
		std::cin >> data1[i];
	}

	std::cout << "введите вторую  дату: ";

	for (int i = 0; i < 3; i++)
	{
		std::cin >> data2[i];
	}

	god(data1, data2);

	std::cout << "задание 2\n";

	int arr[size]{};

	arifmet(arr);
	

	std::cout << "\nзадание 3\n";

	int mass[size]{};

	fyn(mass);
	
	
	return 0;
}

