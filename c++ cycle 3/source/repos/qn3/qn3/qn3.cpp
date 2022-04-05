#include <iostream>
using namespace std;

int main()
{
	int ans;

	do{
		float a, b,x;
		cout << "Enter values for a and b\n";
		cin >> a >> b;
		try
		{
			if (b == 0)
			{
				throw "Exception caught : Division by zero!";
			}
			else{				
				x = a / b;
				cout << "Division of "<<a<<"/"<<b<<" is : "<<x << endl;
			}
		}
		catch (const char *message)
		{
			cout<<message<<endl;
			cout << "Division by zero not possible.\n";
		}
		cout << "Do you want to continue ?(1/0) ";
		cin >> ans;

	} while (ans);
	cout << "Thank you";
	return 0;

}
