// denemekod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{



	int a[10]{};

	auto f = [a=a]() {++a*; };

	std:<< f << std::endl;


}

