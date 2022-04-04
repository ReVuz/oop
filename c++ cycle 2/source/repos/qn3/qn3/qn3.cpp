#include<iostream>
using namespace std;
class Vector {
	int i, j, k;
public:
	Vector(){};
	friend int operator*(Vector , Vector);
	friend istream& operator>>(istream&, Vector&);
	friend ostream& operator<<(ostream&, Vector&);
};
int operator*(Vector a, Vector b) {
	int dot_pdt;
	dot_pdt = (a.i * b.i) + (a.j * b.j) + (a.k * b.k);
	return dot_pdt;
}
istream& operator>>(istream& din, Vector& b) {
	din >> b.i >> b.j >> b.k;
	return (din);
}
ostream& operator<<(ostream& dout, Vector& v) {
	dout << v.i << "i + " << v.j << "j + " << v.k << "k";
	return (dout);
}
int main() {
	Vector V1, V2;
	cout << "Enter vector V1 : ";
	cin >> V1;
	cout << "Enter vector V2 : ";
	cin >> V2;
	cout << "V1 = " << V1<<endl;
	cout << "V2 = " << V2<<endl;
	int p = V1 * V2;
	cout << "Dot product of the vectors : "<<p<<endl;

	return 0;
}