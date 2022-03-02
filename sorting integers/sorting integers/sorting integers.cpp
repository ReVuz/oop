// sorting integers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program to sort given array in ascending order

#include <iostream>
using namespace std;
int sort(int x[])
{
	int i, j, k, num;

	for (i = 0; i < num; i++) {
		for (j = i + 1; j < num; j++) {
			if (x[i] > x[j + 1]) {
				k = x[j + 1];
				x[j + 1] = x[i];
				x[i] = k;
			}
		}
	}
	return 0;
}
int main()
{
	int x[20],num;
	cout << "enter range : ";
	cin >> num;
	cout << "Enter elements : ";
	int i;
	for (i = 0; i < num; i++)
		cin >> x[i];
	sort(x);
	cout << "After sorting : ";
	for (i = 0; i < num; i++)
		cout << x[i+1] << endl;
	return 0;
 
}