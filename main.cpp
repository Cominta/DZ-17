#include <iostream>
#include <windows.h>
#include <time.h>

void setCursor(int x, int y, int color)
{
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = {x, y};

	SetConsoleCursorPosition(hConsoleOutput, pos);
	SetConsoleTextAttribute(hConsoleOutput, color);
}

int Cube(int num)
{
	return num * num * num;
}

bool isPrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	// 1
	// setCursor(0, 0, 2);

	// 2
	// std::cout << Cube(5);

	// 3
	std::cout << isPrime(17);
	std::cout << " " << isPrime(25);

	return 0;
}