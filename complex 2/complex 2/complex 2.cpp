#include<iostream>

using namespace std;

class complex
{
	float x, y;
public:
	complex(){};
	complex(float a) { x = y = a; }
	complex(float real, float image)
	{
		x = real; y = image;
	}

	friend complex sum(complex, complex);
	friend void show(complex);
};
complex sum(complex c1, complex c2) {
	complex c3;
	c3.x = c2.x + c1.x;
	c3.y = c1.y + c2.y;
	return(c3);
}
void show(complex c) {
	if(c.y>0){
		cout << c.x << " + " << c.y << "j" << endl;
	}
	else if(c.y<0){
		cout << c.x << " - " << c.y << "j" << endl;
	}
	else
		cout<<c.x<<endl;


}
int main() {
	cout << "Enter values for a1 and b1: ";
	float a1, b1;
	cin >> a1 >> b1;
	complex A(a1, b1);
	cout << "Enter 2 equal values for a2 and b2: ";
	float a2;
	cin >> a2;
	complex B(a2);
	complex C;

	C = sum(A, B);

	cout << "A = ";
	show(A);
	cout << "\nB = ";
	show(B);
	cout << "\nSum of the given complex = ";
	show(C);

	return 0;
}
