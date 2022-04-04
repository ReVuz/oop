// factorial of a number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program to find factorial of a given number

#include <iostream>
using namespace std;
int fac(int x)
{
	int i, f = 1;
	for (i = 1; i <= x; i++) {
		f = f * i;
		if (x == 0) {
			return 1;
		}

}
int main()
{
	int num;
	cout << "Enter a number : ";
	cin >> num;
	fac(num);
	cout << "Factorial of " << num << " is : " << f << endl;
	return 0;
}