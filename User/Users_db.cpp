#include "Users_db.h"

void Users_db::add(const User& user)
{
	User** tmp = new User*[count + 1];
	for (int i = 0; i < count; i++)
	{
		tmp[i] = new User(*users[i]);
	}
	tmp[count] = new User(user.getFatherName(), user.getName(), user.getAge(), ++count);

	if (this->users)
	{
		delete[] this->users;
	}
	this->users = tmp;
}

bool Users_db::save(const std::string& path) const
{
	FILE* pf;
	fopen_s(&pf, path.c_str(), "wt");
	if (pf)
	{
		fprintf(pf, "%i", count);
		for (int i = 0; i < count; i++)
		{
			fprintf(pf, "%s %s %i %i\n", users[i]->getFatherName().c_str(), users[i]->getName().c_str(), users[i]->getAge(), users[i]->getID());
		}
		fclose(pf);
		return true;
	}
	return false;
}

Users_db::~Users_db()
{
	if (this->users)
	{
		delete[] this->users;
	}
}
