#pragma once
#include"User.h"

class Users_db
{
private:
	User** users;
	int count;
public:
	Users_db()
	{
		this->users = nullptr;
		this->count = 0;
	}
	bool load(const std::string& path);

	void remove(int id);

	void remove(const User& user);

	User* getByID(int id);

	User* operator[](int index);

	friend std::ostream& operator<<(std::ostream& out, Users_db& users);
};

