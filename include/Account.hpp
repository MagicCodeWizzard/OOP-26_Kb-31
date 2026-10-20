#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>
#include <chrono>

#include "User.hpp"

class Account
{
public:
    Account();
    Account(long id, bool is_locked, bool is_suspended, int reputation_level,
            std::chrono::system_clock::time_point last_login_time,
            std::chrono::system_clock::time_point registration_time);

    ~Account();

    std::string toString();
    void setUser(User* _user) {  this->user = _user; }

private:
    long id;
    bool is_locked;
    bool is_suspended;
    int reputation_level;
    std::chrono::system_clock::time_point last_login_time;
    std::chrono::system_clock::time_point registration_time;
    User* user;
};

#endif