#include <iostream>
#include"Users_db.h"

int main()
{
	Users_db users;

	User user;
	user.setFatherName("Father");
	user.setName("name");
	user.setAge(20);

	users.add(user);

	user.setFatherName("Father2");
	user.setName("name2");
	user.setAge(30);

	users.add(user);

	users.save("C:\\Users\\student\\Desktop\\users.txt");
}