#include <iostream>
#include<iomanip>
using namespace std;
class bank {
	char name[20],typ[15];
	int acn;
	double balanc;
public:
	int newac();
	void withdraw(void);
	void deposit(float c);
	void balance();
	void ac_statement();
	int ac_num(){
		return acn;
		}
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
void bank::withdraw(void)
{float b;
cout<<"Enter amount to withdraw : ";
cin>>b;
	balanc -= b;
	if (balanc < 500)
	{
		cout << " Sorry your balance is not sufficient to withdraw INR" << b << "\n"
			<< " You have to store at least INR 500 to keep your account active\n";
		balanc += b;
	}
	else{
		cout<<"Withdrawal Successfull!";
		cout<<"\nAvailable balance : "<<balanc<<endl;
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
{int ans;
	bank account[10];
	int ct=0,ac_no,number;
	do{
	int flag=0;
	cout << "WELCOME TO ABC ATM!!!! \nHere are some of the options that are available: "
	"	\n1. Create a new account \n2. Withdraw \n3. Deposit "
		"\n4. Balance Enquiry \n5. Account statement \nChoose any number from below: ";
	int num;
	cin >> num;
	if (num == 1) {
			account[ct].newac();
			ct+=1;
	}if(num>1){
		cout<<"Please Enter Account number : ";
		cin>>ac_no;
		for(int i=0;i<ct+1;i++){
			if(account[i].ac_num()==ac_no){
				number=i;
				break;

			}
			else
			{
			flag = 1;
			cout<<"Account not found "<<endl;
			break;
			}
		}
		
	}
	
		if (!flag && num==3)
		{
			cout<<"Please enter deposite amount : " << endl;
			float dp;
			cin >> dp;
			account[number].deposit(dp);
		}
		if (!flag && num == 2) {
			account[number].withdraw();
		}
		if (!flag && num == 5) {
			cout << " Details of the Account Holder :" << endl << endl;
			account[number].ac_statement();
		}
		if (!flag && num == 4) {
			account[number].balance();
		}
		cout << "\nDo you want to continue ?(1/0) ";
		cin >> ans;
	} while (ans);
	cout << " Thank you ,see again\n";
	return 0;
}
