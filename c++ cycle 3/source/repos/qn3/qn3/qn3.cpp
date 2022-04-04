#include <iostream>
using namespace std;

int main()
{
	int ans;

	do{
		int a, b,x;
		cout << "Enter values for a and b\n";
		cin >> a >> b;
		x = a / b;
		try
		{
			if (b != 0)
			{
				cout << "Division of "<<a<<"/"<<b<<" is : "<<x << endl;
			}
			else
				throw(x);
		}
		catch (int c)
		{
			cout << "Exception caught : x = " << x << endl;
			cout << "Division by zero not possible.\n";
		}
		cout << "Do you want to continue ?(1/0) ";
		cin >> ans;

	} while (ans);
	cout << "Thank you";
	return 0;

}