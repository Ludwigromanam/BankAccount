//
//  BankAccount.cpp
//  BankATM
//
//  Created by Rui Li on 1/24/15.
//  Copyright (c) 2015 Rui Li. All rights reserved.
//
//#include <iostream>
#include "bankAccount.h"
//using namespace std;

    BankAccount::BankAccount(std::string owner_name, std::string owner_date_of_birth,std::string password, long account_number){
        this->owner_name = owner_name;
        this->owner_date_of_birth = owner_date_of_birth;
        this->account_number = account_number;
        this->password = password;
    }

    std::string BankAccount::get_owner(){
        return owner_name;
    }

    std::string BankAccount::get_owner_DOB(){
        return owner_date_of_birth;
    }

    std::string BankAccount::get_password(){
        return password;
    }
    double BankAccount::get_balance(){
        return balance;
    }
    void BankAccount::deposit(double amount){
        balance += amount;
    }
    void BankAccount::withdraw(double amount){
        balance -= amount;
    }
    void BankAccount::change_password(std::string new_password){
        password = new_password;
    }
    void BankAccount::change_owner(std::string new_owner) {
        owner_name = new_owner;
    }
    long BankAccount::getNumber() {
        return account_number;
    }

