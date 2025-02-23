#include<Windows.h>
#include<iostream>
#include<vector>
#include<string>

std::vector<int> whole;
std::vector<double> fraction;
std::vector<std::string> line;

int number;


void Start();
void MenuVector();
void FillingVector();
void DeleteLastElements();
void PrintVector();
void DeleteValue();
void DeleteId();
void DeleteVector();
void SortVectorMax();
void SortVectorMin();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Start();

	return 0;
}

void Start()
{
	system("cls");
	while (true)
	{
		std::cout << "1 - Вектор int. \n2 - Вектор double.\n3 - Вектор string.\n0 - Завершить программу\n\nКакой вектор выберем: ";
		std::cin >> number;

		if (number == 0)
		{
			
		}
		else if (number != 1 && number != 3 && number != 2)
		{
			std::cout << "Ошибка ввода";
		}
		else
		{
			MenuVector();
		}
	}
}


void MenuVector()
{
	while (true)
	{
		int number1;

		system("cls");
		std::cout << "1 - Заполнить вектор. \n2 - Убрать последний элемент вектора.\n3 - Что находится в векторе.\n4 - Вырезать элемент по значению.\n5 - Вырезать элемент по индексу."
			<<"\n6 - Очистить вектор.\n7 - Отсортировать вектор по возрвстанию.\n8 - Отсортировать вектор по убыванию.\n0 - Вернуться.\n\nЧто будем делать : ";
		std::cin >> number1;

		if (number1 == 0)
		{
			Start();
		}
		else if (number1 == 1)
		{
			FillingVector();
		}
		else if (number1 == 2)
		{
			DeleteLastElements();
		}
		else if (number1 == 3)
		{
			PrintVector();
		}
		else if (number1 == 4)
		{
			DeleteValue();
		}
		else if (number1 == 5)
		{
			DeleteId();
		}
		else if (number1 == 6)
		{
			DeleteVector();
		}
		else if (number1 == 7)
		{

		}
		else if (number1 == 8)
		{

		}
		else
		{
			std::cout << "Ошибка ввода";
		}
	}
}

void FillingVector()
{
	int number1;
	double number2;
	std::string str;

	if (number == 1)
	{
		std::cout << "Введите число: ";
		std::cin >> number1;
		whole.push_back(number1);
	}
	else if (number == 2)
	{
		std::cout << "Введите число: ";
		std::cin >> number2;
		fraction.push_back(number2);
	}
	else if (number == 3)
	{
		std::cout << "Введите строку: ";
		std::getline(std::cin, str);
		line.push_back(str);
	}
	else
	{
		std::cout <<  "error";
	}
}

void DeleteLastElements()
{
	if (number == 1)
	{
		whole.pop_back();
	}
	else if (number == 2)
	{
		fraction.pop_back();
	}
	else if (number == 3)
	{
		line.pop_back();
	}
	else
	{
		std::cout << "error";
	}
	std::cout << "Удаление успешно";
}

void PrintVector()
{
	if (number == 1)
	{
		if (whole.size() == 0)
		{
			std::cout << "Вектор пуст.\n";
		}
		else
		{
			std::cout << "id\tСодержимое\n";
			for (int i = 1; i < whole.size(); i++)
			{
				std::cout << i << "\t" << whole[i] << "\n";
			}
		}
	}
	else if (number == 2)
	{
		if (fraction.size() == 0)
		{
			std::cout << "Вектор пуст.\n";
		}
		else
		{
			std::cout << "id\tСодержимое\n";
			for (int i = 1; i < fraction.size(); i++)
			{
				std::cout << i << "\t" << fraction[i] << "\n";
			}
		}
	}
	else if (number == 3)
	{
		if (line.size() == 0)
		{
			std::cout << "Вектор пуст.\n";
		}
		else
		{
			std::cout << "id\tСодержимое\n";
			for (int i = 1; i < line.size(); i++)
			{
				std::cout << i << "\t" << line[i] << "\n";
			}
		}
	}
	else
	{
		std::cout << "error";
	}
	system("pause");
}

void DeleteValue()
{
	int value;
	double value1;
	std::string str;
	if (number == 1)
	{
		std::cout << "Введите значение которое хотите удалить: ";
		std::cin >> value;
		whole.erase(remove(whole.begin(), whole.end(), value), whole.end());
	}
	else if (number == 2)
	{
		std::cout << "Введите значение которое хотите удалить: ";
		std::cin >> value1;
		fraction.erase(remove(fraction.begin(), fraction.end(), value), fraction.end());
	}
	else if (number == 3)
	{
		std::cout << "Введите строку которую хотите удалить: ";
		std::cin >> str;
		line.erase(remove(line.begin(), line.end(), str), line.end());
	}
	else
	{
		std::cout << "error";
	}
}

void DeleteId()
{
	int number1;

	std::cout << "\nВведите id для удаления: ";
	std::cin >> number1;

}

void DeleteVector()
{
	if (number == 1)
	{
		whole.clear();
	}
	else if (number == 2)
	{
		fraction.clear();
	}
	else if (number == 3)
	{
		line.clear();
	}
	else
	{
		std::cout << "error";
	}
	std::cout << "Удаление успешно";
}


