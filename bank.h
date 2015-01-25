#ifndef BANK_H
#define BANK_H
#include <vector>
#include "bankAccount.h"
#include <string>

class Bank {
private:
    std::string name;
    std::vector<BankAccount> accounts;
    bool memberFDIC;
    double balance;
    //Bank() {};
public:
    Bank(std::string name,double balance);
    Bank(std::string name, double balance, bool memberFDIC);
    ~Bank();
    std::string getName();
    //std::string getDOB();
    std::vector<BankAccount> getAccounts();
    bool isMemberFDIC();
    double getBalance();
    void openBankAccount(std::string name, std::string dob, std::string password, long number);//{
	//	this.accounts.add(new BankAccount(owner, password, number));
	//}
	void closeBankAccount(std::string name, std::string dob, std::string password, long number);
	//public void closeBankAccount(Person p, std::string password, Long number){
	/*	for (BankAccount b: accounts)
			if (b.getNumber() == number && b.getOwner().equals(p) && b.getNumber() == number)
				this.accounts.remove(b);
	}*/

	void deposit(long accountNumber, double amount);/*{
		for(BankAccount b: accounts)
			if (b.getNumber() == accountNumber)
				return b.deposit(amount);
	}*/
	void withdraw(long accountNumber, std::string password, double amount);/*{
		for(BankAccount b: accounts)
			if(b.getNumber() == accountNumber && b.getPassword() == password)
				return b.withdraw(amount);
	}*/
	double checkBalance(BankAccount b);/*{
		return b.getBalance();
	}*/
	BankAccount findByNumber(long number);/*{
		for ( BankAccount b: this.accounts)
			if(b.getNumber() == number)
				return b;
		return null;
	}*/
	BankAccount findByNameAndDOB(std::string name, std::string dob);
};

#endif // BANK_H
