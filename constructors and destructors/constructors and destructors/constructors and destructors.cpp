#include<iostream>
using namespace std;
int c = 0;
class alpha {
public:
	alpha() {
		c++;
		cout << "\nNo: of object created : " << c;
	}
	~alpha() {
		cout << "\nNo: of object destroyed : " << c;
		c--;
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