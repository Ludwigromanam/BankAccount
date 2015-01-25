//
//  BankAccount.cpp
//  BankATM
//
//  Created by Rui Li on 1/24/15.
//  Copyright (c) 2015 Rui Li. All rights reserved.
//
//#include <iostream>
//#include "BankAccount.h"
//using namespace std;
#ifndef BANK_ACCOUNT_H
#include <string>

class BankAccount{
private:
    std::string owner_name;
    std::string owner_date_of_birth;
    long account_number;
    std::string password;
    double balance = 0.0;

public:
    BankAccount(std::string owner_name, std::string owner_date_of_birth,std::string password, long account_number);/*{
        this->owner_name = owner_name;
        this->owner_date_of_birth = owner_date_of_birth;
        this->account_number = account_number;
        this->password = password;
    }*/

    std::string get_owner();/*{
        return owner_name;
    }*/

    std::string get_owner_DOB();/*{
        return owner_date_of_birth;
    }*/

    std::string get_password();/*{
        return password;
    }*/
    double get_balance();/*{
        return balance;
    }*/
    void deposit(double amount);/*{
        balance += amount;
    }*/
    void withdraw(double amount);/*{
        balance -= amount;
    }*/
    void change_password(std::string new_password);/*{
        password = new_password;
    }*/
    long getNumber();
};

#endif // BANK_ACCOUNT_H

