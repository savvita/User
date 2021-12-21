#include "Users_db.h"

bool Users_db::load(const std::string& path)
{
	FILE* pf;
	fopen_s(&pf, path.c_str(), "rt");
	if (pf)
	{
		fscanf_s(pf, "%i", &this->count);
		if (this->users)
		{
			delete[] this->users;
		}

		this->users = new User * [this->count];

		for (int i = 0; i < count; i++)
		{
			if (feof(pf))
			{
				fclose(pf);
				return false;
			}

			std::string fname;
			char ch;

			while ((ch = fgetc(pf)) != EOF && ch!= ' ')
			{
				fname += ch;

			}

			std::string name;
			while ((ch = fgetc(pf)) != EOF && ch!= ' ')
			{
				name += ch;
			}

			int age;
			int id;
			
			fscanf_s(pf, "%i %i\n", &age, &id);
			this->users[i] = new User(fname, name, age, id);
		}

		fclose(pf);
		return true;
	}
	return false;
}

void Users_db::remove(int id)
{
	int index = -1;
	for (int i = 0; i < this->count; i++)
	{
		if (this->users[i]->getID() == id)
		{
			index = i;
			break;
		}
	}

	if (index != -1)
	{
		User** tmp = new User * [count - 1];
		for (int i = 0; i < index; i++)
		{
			tmp[i] = new User(*this->users[i]);
		}
		
		for (int i = index + 1; i < this->count; i++)
		{
			tmp[i - 1] = new User(*this->users[i]);
		}

		if (this->users)
		{
			delete[] this->users;
		}

		this->users = tmp;
		count--;
	}
}

void Users_db::remove(const User& user)
{
	this->remove(user.getID());
}

User* Users_db::getByID(int id)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->users[i]->getID() == id)
		{
			return this->users[i];
		}
	}
	return nullptr;
}

User* Users_db::operator[](int index)
{
	if (index >= 0 && index < count)
	{
		return this->users[index];
	}
	return nullptr;
}
