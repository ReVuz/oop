#include<iostream>
using namespace std;
class alpha {
	int count = 0;
public:
	alpha() {
		count++;
		cout << "\nNo: of object created : " << count;
	}
	~alpha() {
		cout << "\nNo: of object destroyed : " << count;
		count--;
	}
};
int main() {
	cout << "\n\nEnter Main: ";
	alpha a1, a2, a3, a4; {
		cout << "\nEnter Block1 : \n";
		alpha a5;
	}
	{
		cout << "\nEnter Block2 : \n";
		alpha a6;
	}
	cout << "\n\nRE-Enter Main: \n";
	return 0;
}