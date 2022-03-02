#include <iostream>
#include<iomanip>
using namespace std;
class bank {
	char name[20],typ[15];
	int acn;
	double balanc;
public:
	int newac();
	void withdraw(float b);
	void deposit(float c);
	void balance();
	void ac_statement();

};
int bank::newac()
{
	float initial;
	cout << " You have to pay minimum amount of INR 500 to open your account \n"
		<< " You have to store at least INR 500 to keep your account active\n"
		<< "Do you want to open a account????"<<endl<<"for yes press 1 "<<"\nfor no press 0 "<<endl;
	int test;
	cin >> test;
	if (test == 1)
	{
		initial = 500;
		balanc = initial;
		cout << " Enter name of the account holder: " << endl;
		cin >> name;
		cout << "Account number: " << endl;
		cin >> acn;
		cout<< "Account type to create account : " << endl;
		cin>> typ;
		cout << "CONGRATS!!!!\nAn account with minimum balance has been created !!!!!";
	}
	else
		cout<<"Ok";
	return test;
}
void bank::deposit(float c)
{
	balanc += c;
	cout << "INR " << c << " has been credited to your account " << acn << endl;
}
void bank::withdraw(float b)
{
	balanc -= b;
	if (balanc < 500)
	{
		cout << " Sorry your balance is not sufficient to withdraw " << b << "TK\n"
			<< " You have to store at least INR 500 to keep your account active\n";
		balanc += b;
	}

}
void bank::balance(void) {
	cout << "You have balance : " << balanc <<"Rs" << endl;
}
void bank::ac_statement(void)
{
	cout << "Name: " << name<< "\nAccount type: " << typ<< "\nBalance: " << balanc<< endl;
}
int main()
{
	bank account;
	cout << "WELCOME TO ABC ATM!!!! \nHere are some of the options that are available: "
	"	\n1. Create a new account \n2. Withdraw \n3. Deposit "
		"\n4. Balance Enquiry \n5. Account statement \nChoose any number from below: ";
	int num;
	cin >> num;
	if (num == 1) {
		account.newac();
	}
		if (num==3)
		{
			cout<<"Please enter deposite amount : " << endl;
			float dp;
			cin >> dp;
			account.deposit(dp);
		}
		if (num == 2) {
			cout << "Please enter withdrawal amount :" << endl;
			float wd;
			cin >> wd;
			account.withdraw(wd);
		}
		if (num == 5) {
			cout << " Details of the Account Holder :" << endl << endl;
			account.ac_statement();
		}
		if (num == 4) {
			account.balance();
		}
	cout << " Thank you ,see again\n";
	return 0;
}
