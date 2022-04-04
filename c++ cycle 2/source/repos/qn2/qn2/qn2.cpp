#include<iostream>
using namespace std;
class complex {
	float real, imag;
public:
	complex() { };
	complex(float x, float y) {
		real = x; imag = y;
	}
	void getdata(void) {
		cin >> real >> imag;
	}
	void display(void);
	friend complex operator+(complex a1, complex b1) {
		complex temp;
		temp.real = a1.real + b1.real;
		temp.imag = a1.imag + b1.imag;
		return temp;
	}
	friend complex operator*(complex a2, complex b2) {
		complex temp;
		temp.real = (a2.real * b2.real) - (a2.imag * b2.imag);
		temp.imag = (a2.real * b2.imag) + (a2.imag * b2.real);
		return temp;
	}
};
void complex::display(void) {
	cout << real << " + " << imag << "j" << endl;
}
int main() {
	int num,ans;
	complex c1, c2, c3;
	do {
		cout << "\tComplex Numbers Operations \n\nAvailable Operations : "
			<< "\n1. Addition \n2. Multiplication \n3. Exit "
			<< "\nChoose any number from above : ";
		cin >> num;
		if (num == 1 or num == 2) {
			cout << "\nEnter values of first complex number : ";
			c1.getdata();
			cout << "Enter values of second complex number : ";
			c2.getdata();
		}
		if (num == 1) {
			c3 = c1 + c2;
			cout << "\n\tAddition\n";
			cout << "   "; c1.display(); 
			cout << " + "; c2.display(); cout << "------------\n= "; c3.display();
		}
		else if (num == 2) {
			c3 = c1 * c2;
			cout << "\n\tMultiplication\n";
			cout << "   "; c1.display(); cout << " * "; c2.display(); cout << "------------\n = "; c3.display();
		}
		else {
			break;
		}
		cout << "Do you want to continue ?(1/0) ";
		cin >> ans;
	} while (ans);
		cout << "Thank you";
	return 0;
}