#include <string>
#include<iostream>
#include "User.h"

User::User() :User("", "", 0, 0)
{
}

User::User(std::string fname, std::string name, int age, long id)
{
	this->fname = fname;
	this->name = name;
	this->age = age;
	this->id = id;
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

std::ostream& operator<<(std::ostream& out, const User& user)
{
	out << user.getFatherName() << " " << user.getName() << ", age " << user.getAge() << ", ID " << user.getID() << "\n";
	return out;
}
