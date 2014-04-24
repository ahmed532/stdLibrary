#include "Vector.h"
#include <iostream>

int main(int argc, char const *argv[])
{
	Vector v;
	init_Vector(v, 10);
	for (int i = 0; i < 5; ++i)
	{
		std::cin >> v.elem[i];
	}
	for (int i = 0; i < 5; ++i)
	{
		std::cout << v.elem[i] << " ";
	}
	std::cout << '\n';
	return 0;
}
