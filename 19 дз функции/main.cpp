#include <iostream>

//task1

int min(int num1, int num2)
{
	int min_num = num1;
		if (min_num < num2)
			min_num = num2;
		for (int i = min_num; i > 0; i--)
		{
			if (num1 % i == 0 && num2 % i == 0)
				return i;
		}
}

//Task2

int mirror_number(int num1 = 0; int num2 = 1234)
{
	for (int i = 0; i < num; i++)
	{
		num /= 10;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//task1
	int num1 = 12;
	int num2 = 9;
	std::cout << "Наибольший делитель 12 и 9 -> " << min(num1, num2) << "\n\n";

	//task2



	return 0;
}