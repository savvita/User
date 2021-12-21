#include <iostream>
#include"Users_db.h"

int main()
{
    Users_db users;
    users.load("D:\\users.txt");
    std::cout << users;
    
    std::cout << "======================\n";
	User user = *users.getByID(3);
    users.remove(user);
    std::cout << users;
    
    std::cout << "======================\n";
    users.remove(5);
    std::cout << users;
}
