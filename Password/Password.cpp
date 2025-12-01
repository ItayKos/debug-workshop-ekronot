#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	// when initializing Password, it sets the boolean value "incorrect" immediately after the char array "value" in memory, and sets it to 1 (true),
	// and when we enter a password, no part of the code makes sure we only enter up to 15 characters (array size is 16, minus the null terminator),
	// so we can enter more than 16 characters into the value of Password, and override the value of the boolean "incorrect", and if we set it to 0 (false),
	// it will print "Congratulations".
	// but to set it to false we need to enter 16 characters into the password, followed by the ascii value 0, which is null, and to do that we need to press Ctrl+2 (Ctrl+@).
	// so, any password that has 16 characters, and then null (or 0), will work. like this: abcdefghijklmnop <- (add Ctrl+2 before pressing enter)


	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}