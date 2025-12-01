#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	unsigned int i = 0;
	for (i = 0; i < destsize; i++)
	{
		*ret++ = *src++;
	}
	ret = dest;
	ret[destsize - 1] = 0;
	return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[12];
	char src[] = "hello world!";

	string_copy(dest, 12, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
