#include<iostream>
using namespace std;
class complex {
	float x, y;
public:
	void input(float real, float imag) {
		x = real; y = imag;
	}
	friend complex sum(complex, complex);
	void show(complex);
};
complex sum(complex c1, complex c2) {
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return (c3);
}
void complex::show(complex c) {
	cout << c.x << " + " << c.y << "j" << endl;
}
int main() {
	complex a;
	cout << "Enter values for a1 and b1 " << endl;
	float p, q;
	cin >> p >> q;
	a.input(p, q);
	complex b;
	cout << "Enter values for a2 and b2 " << endl;
	float r, s;
	cin >> r >> s;
	a.input(r, s);
	complex c;
	c = sum(a, b);

	cout << "A = "; a.show(a);
	cout << "B = "; b.show(b);
	cout << "Sum = "; c.show(c);

	return 0;
}