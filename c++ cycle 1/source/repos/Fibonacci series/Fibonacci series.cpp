// Fibonacci series.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program to print fibonacci series

#include <iostream>
using namespace std;
int fib(int x)
{
	int i, a = 0, b = 1, s = 0;
	for (i = 1; i <= x - 2; i++) {
		if (i == 1)
			cout << a << ",";
		if (i == 2)
			cout << b << ",";
		s = a + b;
		a = b;
		b = s;
		cout << s << ",";
		return 0;
}
int main()
{
	int num;
	cout << "Enter how many numbers to print : ";
	cin >> num;

	fib(num);

	return 0;
}