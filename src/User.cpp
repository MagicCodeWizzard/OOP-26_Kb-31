#include "User.hpp"

#include <string>
#include <iostream>

User::User()
{
    std::cout << "User::User()" << std::endl;

    age = 0;
    name = "Unknown";
    telNumber = "Unknown";
}

User::User(short age, std::string name, std::string telNumber)
{
    std::cout << "User::User(with arguments)" << std::endl;

    this->age = age;
    this->name = name;
    this->telNumber = telNumber;
}

User::User(const User& other)
{
    std::cout << "User::User(const User& other)" << std::endl;

    this->age = other.age;
    this->name = other.name;
    this->telNumber = other.telNumber;
}

User::~User()
{
    std::cout << "User::~User()" << std::endl;
}

std::string User::toString()
{
    std::string result = "Age: " + std::to_string(age) + "\n";
    result += "Name: " + name + "\n";
    result += "Telephone Number: " + telNumber + "\n";
    return result;
}

void User::changeName(std::string newName)
{

}

void User::changeTelNumber(std::string newTelNumber)
{

}
