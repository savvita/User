#include <iostream>
#include "User.h"

int main()
{
}

User::User() :User("", "", 0)
{
}

User::User(std::string fname, std::string name, int age)
{
	this->fname = fname;
	this->name = name;
	this->age = age;
}

void User::setFatherName(std::string fname)
{
	this->fname = fname;
}

void User::setName(std::string name)
{
	this->name = name;
}

void User::setAge(int age)
{
	if (age > 0 && age <= 100)
		this->age = age;
}
