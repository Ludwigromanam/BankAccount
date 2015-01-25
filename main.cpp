#include <iostream>
#include "bank.h"
#include <vector>
//#include "bankAccount.h"
using namespace std;

void displayMessage(){
		string s = "Hello, and welcome to Rui's Bank. Press any key to Continue:\n[1] Open New Bank Account\n[2] Close Your Bank Account\n[3] Deposit Money\n[4] Withdraw Money\n[5] Change Your Password\n[6] Transfer Money to Another Account\n[7] Change Account Ownership\nPress any other key to exit.\n";
		cout << s;
}
int main()
{
    Bank* myBankPtr = new Bank("Nameless Bank",100000000000, true);
    bool goAgain = true;
    do{
            displayMessage();
            int choice;
            cin >> choice;
            switch(choice){
            case 1: { //open account
                cout << "Enter Your First Name: ";
				string firstName;
				cin >> firstName;
				cout << "Enter Your Last Name: ";
				string lastName;
				cin >> lastName;
				/*cout << "Enter Your Birth Year:";
				int year;
				cin >> year;
                */
				string dob;
				cout << "Enter your date of birth (mm-dd-yyyy): ";
				cin >> dob;
				cout << "Choose a Password: ";
				string password;
				cin >> password;
				myBankPtr->openBankAccount(firstName + " " + lastName,dob,password,123456789);
				//generate bank account number later
				//cout << myBankPtr->getAccounts().size() << endl;
				break;
            }
            case 2: { //close account
                cout << "Enter Your First Name: ";
				string firstName;
				cin >> firstName;
				cout << "Enter Your Last Name: ";
				string lastName;
				cin >> lastName;
				/*cout << "Enter Your Birth Year:";
				int year;
				cin >> year;
                */
				string dob;
				cout << "Enter your date of birth (mm-dd-yyyy): ";
				cin >> dob;
				bool hasPassword = false;
				string password;
				for(int i = 0; i < 3; i++) {
                    cout << "Enter your Password: ";
                    cin >> password;
                    if(myBankPtr->findByNameAndDOB(firstName + " " + lastName,dob).get_password() == password) {
                        hasPassword = true;
                        break;
                    } else if(i < 2) {
                        cout << "You have entered your password incorrectly." << endl;
                        cout << "You have ";
                        cout << 2 - i;
                        cout << " attempts left before you must try again later." << endl;
                    }
                }
                if(!hasPassword) {
                    cout << "You have run out of attempts to enter in your password. Try again later." << endl;
                    break;
                }
				myBankPtr->closeBankAccount(firstName + " " + lastName,dob,password,123456789);
				//deal with bank account number later
                //goAgain = false;
                cout << "Account Closed" << endl;
                //cout << myBankPtr->getAccounts().size() << endl;
                break;
            }
            case 3: { //deposit money

                break;
            }
            case 4: { //withdraw money
                break;
            }
            case 5: { //change password
                break;
            }
            case 6: { //transfer money to another account
                break;
            }
            case 7: { //change account ownership
                break;
            }
            default: {
                goAgain = false;
                break;
            }
            }
		}while(goAgain);
    cout << myBankPtr->getBalance() << endl;
    //myBankPtr->openBankAccount("Michael Feffer","12-18-1995","#sol33t",1234567890);
    //cout << ((myBankPtr->getAccounts())[0]).get_owner() << endl;
    cout << "Hello world!" << endl;
    delete(myBankPtr);
    return 0;
}
