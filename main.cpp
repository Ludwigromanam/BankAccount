#include <iostream>
#include "bank.h"
#include <vector>
//#include "bankAccount.h"
using namespace std;

void displayMessage(){
		string s = "Hello, and welcome to Rui's Bank. Press any key to Continue:\n[1] Open New Bank Account\n[2] Close Your Bank Account\n[3] Deposit Money\n[4] Withdraw Money\n[5] Change Your Password\n[6] Add Authorized Persons to Your Account\n[7] Remove Authorized Persons to Your Account\n[8] Transfer Money to Another Account\n[9] Change Account Ownership\nPress any other key to exit.";
		cout << s;
	}
	//public static void main(String[]args){
		//use dowhile loop
/*		Bank* myBankPtr = new Bank("Nameless Bank",100000000000, true);

		//Scanner in = new Scanner(System.in);

		boolean goAgain = true;
		do{
            myBankptr->displayMessage();
            int choice;
            cin << choice;
            switch(choice){
            case 1: {cout << "Enter Your First Name:";
				string firstName;
				cin >> firstName;
				cout << "Enter Your Last Name:";
				string lastName;
				cin >> lastName;
				/*cout << "Enter Your Birth Year:";
				int year;
				cin >> year;
				System.out.println("Enter Your Birth Month in Number (1-12):");
				int month = in.nextInt();
				System.out.println("Enter Your Birth Day of the Month (1-31):");
				int day = in.nextInt();
				Person owner = new Person(firstName, lastName, new Date(year, month, day));
				string dob;
				cout << "Enter your date of birth (mm-dd-yyyy):";
				cin >> dob;
				cout << "Choose a Password:";
				string password;
				cin >> password;
				//String password = in.nextLine();
				//BankAccount* bPtr = new BankAccount(password, owner, )

		}
				+ " myBank.openBankAccount(null, null, null); break;}
		case 2: myBank.closeAccount(); break;


		}
		}while(goAgain);
		//Accept User input and do stuff
		//
	}

*/
int main()
{
        /*Bank* myBankPtr = new Bank("Nameless Bank",100000000000, true);

		//Scanner in = new Scanner(System.in);

		bool goAgain = true;
		do{
            myBankptr->displayMessage();
            int choice;
            cin << choice;
            switch(choice){
            case 1: {cout << "Enter Your First Name:";
				string firstName;
				cin >> firstName;
				cout << "Enter Your Last Name:";
				string lastName;
				cin >> lastName;
				/*cout << "Enter Your Birth Year:";
				int year;
				cin >> year;

				string dob;
				cout << "Enter your date of birth (mm-dd-yyyy):";
				cin >> dob;
				cout << "Choose a Password:";
				string password;
				cin >> password;
				//String password = in.nextLine();
				//BankAccount* bPtr = new BankAccount(password, owner, )

		}
				+ " myBank.openBankAccount(null, null, null); break;}
		case 2: myBank.closeAccount(); break;


		}
		}while(goAgain);*/
    Bank* myBankPtr = new Bank("Nameless Bank",100000000000, true);
    bool goAgain = true;
    //BankAccountRunner* bkAcctRunner = new BankAccountRunner();
    //bkAcctRunner->displayMessage();
    //displayMessage();
    do{
            displayMessage();
            int choice;
            cin >> choice;
            switch(choice){
            case 1: {
                cout << "Enter Your First Name:";
				string firstName;
				cin >> firstName;
				cout << "Enter Your Last Name:";
				string lastName;
				cin >> lastName;
				/*cout << "Enter Your Birth Year:";
				int year;
				cin >> year;
                */
				string dob;
				cout << "Enter your date of birth (mm-dd-yyyy):";
				cin >> dob;
				cout << "Choose a Password:";
				string password;
				cin >> password;
				myBankPtr->openBankAccount(firstName + " " + lastName,dob,password,123456789);
				//generate bank account number later
				//String password = in.nextLine();
				//BankAccount* bPtr = new BankAccount(password, owner, )
				break;
            }
				//+ " myBank.openBankAccount(null, null, null); break;}
            case 2: /*myBank.closeAccount();*/{ goAgain = false; break;}

            }
            default: {
                goAgain = false;
                break;
            }
		}while(goAgain);
    cout << myBankPtr->getBalance() << endl;
    //myBankPtr->openBankAccount("Michael Feffer","12-18-1995","#sol33t",1234567890);
    //cout << ((myBankPtr->getAccounts())[0]).get_owner() << endl;
    cout << "Hello world!" << endl;
    delete(myBankPtr);
    return 0;
}
