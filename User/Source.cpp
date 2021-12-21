#include <iostream>
#include"User.h"

int main()
{
	User user;
	std::cout << user;
	User user2("Father", "name", 15, 23);
	std::cout << user2;
}