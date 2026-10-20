#include "Account.hpp"

#include <string>
#include <iostream>

Account::Account()
: id(0), 
  is_locked(false), 
  is_suspended(false), 
  reputation_level(0), 
  last_login_time(std::chrono::system_clock::now()), 
  registration_time(std::chrono::system_clock::now()),
  user(nullptr)
{
    std::cout << "Account::Account()" << std::endl;
}

Account::Account(long id, bool is_locked, bool is_suspended, int reputation_level,
                    std::chrono::system_clock::time_point last_login_time,
                    std::chrono::system_clock::time_point registration_time)
{
    this->id = id;
    this->is_locked = is_locked;
    this->is_suspended = is_suspended;
    this->reputation_level = reputation_level;
    this->last_login_time = last_login_time;
    this->registration_time = registration_time;
}

Account::~Account()
{
    std::cout << "Account::~Account()" << std::endl;

    if (user != nullptr)
    {
        delete user;
        user = nullptr;
    }
}

std::string Account::toString()
{
    std::string result = "Account ID: " + std::to_string(id) + "\n";
    result += "Locked: " + std::string(is_locked ? "Yes" : "No") + "\n";
    result += "Suspended: " + std::string(is_suspended ? "Yes" : "No") + "\n";
    result += "Reputation Level: " + std::to_string(reputation_level) + "\n";
    result += "Last Login Time: " + std::to_string(std::chrono::duration_cast<std::chrono::seconds>(last_login_time.time_since_epoch()).count()) + "\n";
    result += "Registration Time: " + std::to_string(std::chrono::duration_cast<std::chrono::seconds>(registration_time.time_since_epoch()).count()) + "\n";
    return result;
}