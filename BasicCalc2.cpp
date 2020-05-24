#include <iostream>	

int selectMode()
{
	std::cout << "Enter the number corresponding to the sign \n";
	std::cout << "1: + \n";
	std::cout << "2: - \n";
	std::cout << "3: * \n";
	std::cout << "4: / \n";
	std::cout << "5: exit \n";
	int mode{};
	std::cin >> mode;
	return mode;
}

int getValue()
{
	std::cout << "Enter an integer \n";
	int input{};
	std::cin >> input;
	return input;
}

void modePlus(int pOne, int pTwo)
{
	std::cout << "Answer: " << pOne + pTwo << '\n';
}

void modeSubtract(int sOne, int sTwo)
{
	std::cout << "Answer: " << sOne - sTwo << '\n';
}

void modeMulti(int mOne, int mTwo)
{
	std::cout << "Answer: " << mOne * mTwo << '\n';
}

void modeDivide(int dOne, int dTwo)
{
	std::cout << "Answer: " << dOne / dTwo << '\n';
}

int main()
{
	int x{ getValue() };
	int y{ getValue() };
	int modeX{ selectMode() };
	if (modeX == 1)
	{
		modePlus(x, y);
	}
	if (modeX == 2)
	{
		modeSubtract(x, y);
	}
	if (modeX == 3)
	{
		modeMulti(x, y);
	}
	if (modeX == 4)
	{
		modeDivide(x, y);
	}
	if (modeX == 5)
	{
		return 0;
	}
}