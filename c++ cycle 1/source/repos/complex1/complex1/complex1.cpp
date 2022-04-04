#include<iostream>

using namespace std;

class complex
{
	float x, y;
public:
	void complex() {};
	float complex(float a) { x = y = a; }
	float complex(float real, float image)
	{
		x = real; y = image;
	}
};
float complex:: complex(float c1, float c2) {
	float c3;
	c3.x = c2.x + c1.x;
	c3.y = c1.y + c2.y;
	return(c3);
}
float complex::complex(float c) {
	cout << c.x << " + " << c.y << "j" << endl;

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

	C = complex(A, B);

	cout << "A = ";
	complex(A);
	cout << "\nB = ";
	complex(B);
	cout << "\nSum of the given complex = ";
	complex(C);

	return 0;
}