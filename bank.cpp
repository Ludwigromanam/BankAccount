//#include <std::vector>
#include "bank.h"
//#include "bankAccount.h"

Bank::Bank(std::string name,double balance) {
    this->name = name;
    this->balance = balance;
}
Bank::Bank(std::string name, double balance, bool memberFDIC) {
    this->name = name;
    this->balance = balance;
    this->memberFDIC = memberFDIC;
}
Bank::~Bank() {
    this->accounts.clear();
    //delete(this);
}
std::string Bank::getName() {
    return this->name;
}
/*std::string Bank::getDOB() {
    return this->dob;
}*/
std::vector<BankAccount> Bank::getAccounts() {
    return this->accounts;
}
bool Bank::isMemberFDIC() {
    return this->memberFDIC;
}
double Bank::getBalance() {
    return this->balance;
}
void Bank::openBankAccount(std::string name, std::string dob, std::string password, long number) {
    BankAccount* bkacct = new BankAccount(name,dob,password,number);
    BankAccount acct = *bkacct;
    (this->accounts).push_back(acct);
}
void Bank::closeBankAccount(std::string name, std::string dob, std::string password, long number) {
	for (int i = 0; i < (this->accounts).size(); i++) {
	    BankAccount currentAcct = (this->accounts)[i];
        if (currentAcct.getNumber() == number && currentAcct.get_owner() == name && currentAcct.get_owner_DOB() == dob && currentAcct.get_password() == password)
				this->accounts.erase(this->accounts.begin() + i);
				delete(&currentAcct);
	}
}
void Bank::deposit(long accountNumber, double amount) {
        for (int i = 0; i < (this->accounts).size(); i++) {
            BankAccount* currentAcctPtr = &(this->accounts)[i];
            if (currentAcctPtr->getNumber() == accountNumber)
				currentAcctPtr->deposit(amount);
        }
	}
void Bank::withdraw(long accountNumber, std::string password, double amount) {
		for (int i = 0; i < (this->accounts).size(); i++) {
            BankAccount* currentAcctPtr = &(this->accounts)[i];
            if(currentAcctPtr->getNumber() == accountNumber && currentAcctPtr->get_password() == password)
				currentAcctPtr->withdraw(amount);
		}
	}
double Bank::checkBalance(BankAccount b) {
		return b.get_balance();
	}
BankAccount Bank::findByNumber(long number) {
		for (int i = 0; i < (this->accounts).size(); i++) {
            BankAccount currentAcct = (this->accounts)[i];
                if(currentAcct.getNumber() == number)
                    return currentAcct;
		}
//		return NULL;
	}
BankAccount Bank::findByNameAndDOB(std::string name, std::string dob) {
    for (int i = 0; i < (this->accounts).size(); i++) {
            BankAccount* currentAcctPtr = &(this->accounts)[i];
                if(currentAcctPtr->get_owner() == name && currentAcctPtr->get_owner_DOB() == dob)
                    return *currentAcctPtr;
		}
//		return NULL;
	}
BankAccount* Bank::getPtrByNameAndDOB(std::string name, std::string dob) {
    for (int i = 0; i < (this->accounts).size(); i++) {
            BankAccount* currentAcctPtr = &(this->accounts)[i];
                if(currentAcctPtr->get_owner() == name && currentAcctPtr->get_owner_DOB() == dob)
                    return currentAcctPtr;
    }
//		return NULL;
}
BankAccount* Bank::getPtrByNumber(long number) {
    for (int i = 0; i < (this->accounts).size(); i++) {
            BankAccount* currentAcctPtr = &(this->accounts)[i];
                if(currentAcctPtr->getNumber() == number)
                    return currentAcctPtr;
		}
}
