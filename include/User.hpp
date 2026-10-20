#ifndef USER_HPP
#define USER_HPP

#include <string>

class User
{
public:
    User();
    User(short age, std::string name, std::string telNumber);

    User(const User& other);

    ~User();

    std::string toString();
    void changeName(std::string newName);
    void changeTelNumber(std::string newTelNumber);

private:
    short age;
    std::string name;
    std::string telNumber;
};

#endif