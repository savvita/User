#include <iostream>
#include"Users_db.h"

int main()
{
	Users_db users;

	char* tmp = new char[2];

	for (int i = 0; i < 10; i++)
	{
		User user;
		_itoa_s(i, tmp, 2, 10);
		std::string name = "FatherName";
		name.append(tmp);
		user.setFatherName(name);

		name = "Name";
		name.append(tmp);
		user.setName(name);
		user.setAge(20 + i);

		users.add(user);		
	}
	delete[] tmp;

	if (users.save("D:\\users.txt"))
	{
		std::cout << "Saved...";
	}
	else
	{
		std::cout << "error openning a file\n";
	}
}