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

	void add(const User& user);

	bool save(const std::string& path) const;
};

