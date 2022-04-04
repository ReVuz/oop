// class implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class item {
	int num;
	float cost;
public:
	void getdata(int a ,float b);

	void putdata(void)
	{
		cout << "Number = " << num<<endl;
		cout << "Cost = " << cost<<endl;
	}
};
void item::getdata(int a, float b) {
	num = a;
	cost = b;
}

int main()
{
	item x;
	cout << "\nObject x "<<endl;
	x.getdata(100, 299.5);
	x.putdata();
	item y;
	cout << "\nObject y "<<endl;
	y.getdata(200, 175.50);
	y.putdata();

	return 0;
}