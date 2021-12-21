#include <iostream>
#include"Users_db.h"

int main()
{
    Users_db users;
    users.load("C:\\Users\\student\\Desktop\\users.txt");
    std::cout << *users[0];
    std::cout << *users[1];
    users.remove(1);
    std::cout << *users[0];
}
