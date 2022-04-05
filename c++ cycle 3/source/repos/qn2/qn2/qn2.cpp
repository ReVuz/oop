#include <iostream>
using namespace std;

template <class T>

class calc
{
	T a, b;
public:
	void get_num(void)
	{
		cout << "Enter a number : ";
		cin >> a;
		cout<<"Enter another number: ";
		cin>>b;
	}
	void show_num(void)
	{
		cout << "Number 1 : " << a << endl
			<< "Number 2 : " << b << endl;
	}
	T sum(void) { return(a + b); }
	T subtraction(void) { return(a - b); }
	T multiply(void) { return(a * b); }
	T division(void) {
		if (b != 0)
			return(a / b);
		else {
			cout << "\nDivision by zero not possible\n";
		}
	}

};


int main()
{
	int ans;
	do
	{
		int c1;

		cout << "\n\tClass Templates\n";
		cout << "Enter the type of data you are going to enter : \n1.Integer \n2.Float \n3. Exit\n";
		cin >> c1;
		if (c1 == 1) {
			int sm, sub, mlt, div;
			calc <int> calc2;
			calc2.get_num();
			calc2.show_num();
			int c2;
			cout << "\nChoose from the options below : \n";
			cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
			cin >> c2;
			if (c2 == 1)
			{
				sm = calc2.sum();
				cout << "Sum : " << sm << endl;
			}
			else if (c2 == 2)
			{
				sub = calc2.subtraction();
				cout << "Subtraction : " << sub << endl;
			}
			else if (c2 == 3)
			{
				mlt = calc2.multiply();
				cout << "Product : " << mlt << endl;
			}
			else if (c2 == 4)
			{
				div = calc2.division();
				cout << "Quotient : " << div << endl;
			}
			else {
				cout << "\nError 404 : Not Found\n";
				continue;
			}
		}
		else if (c1 == 2)
		{
			float sm, sub, mlt, div;
			calc <float> calc1;
			calc1.get_num();
			calc1.show_num();
			int c2;
			cout << "\nEnter your choice\n";
			cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
			cin >> c2;
			if (c2 == 1)
			{
				sm = calc1.sum();
				cout << "Sum : " << sm << endl;
			}
			else if (c2 == 2)
			{
				sub = calc1.subtraction();
				cout << "Subtraction : " << sub << endl;
			}
			else if (c2 == 3)
			{
				mlt = calc1.multiply();
				cout << "Product : " << mlt << endl;
			}
			else if (c2 == 4)
			{
				div = calc1.
					division();
				cout << "Quotient : " << div << endl;
			}
			else {
				cout << "\nError 404 : Not Found\n";
				continue;
			}
		}
		else
			break;

		cout << "\n\nDo you want to continue?(1/0) ";
		cin >> ans;

	} while (ans);
	cout << "Thank You";
	return 0;

}

