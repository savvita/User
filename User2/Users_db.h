#pragma once
#include"User.h"

class Users_db
{
private:
	User** users;
	int count;
public:
	bool load(const std::string& path);

	void remove(int id);

	void remove(const User& user);

	User* getByID(int id);

	User* operator[](int index);
};

