#include<iostream>
#include<cmath>
using namespace std;
class Vector {
	int i, j, k;
	double m;
public:
	void getdata(void);
	void display(void);
	friend int operator==(Vector,Vector);
	friend int operator!=(Vector, Vector);
	friend int operator<(Vector, Vector);
	friend int operator>(Vector, Vector);
	friend int operator<=(Vector, Vector);
	friend int operator>=(Vector, Vector);
	
};
void Vector::getdata(void) {
	cin >> i >> j >> k;
	m = sqrt((i * i) + (j * j) + (k * k));
}
void Vector::display(void) {
	cout << i << "i + " << j << "j + " << k << "k" << endl;
	cout << "Magnitude : " << m << endl;
}
int operator==(Vector v1, Vector v2) {
	if (v1.m == v2.m)
		return 1;
	else
		return 0;
}
int operator!=(Vector v1, Vector v2) {
	if (v1.m != v2.m)
		return 1;
	else
		return 0;
}
int operator<(Vector v1, Vector v2) {
	if (v1.m < v2.m)
		return 1;
	else
		return 0;
}
int operator>(Vector v1, Vector v2) {
	if (v1.m > v2.m)
		return 1;
	else
		return 0;
}
int operator<=(Vector v1, Vector v2) {
	if (v1.m <= v2.m)
		return 1;
	else
		return 0;
}
int operator>=(Vector v1, Vector v2) {
	if (v1.m >= v2.m)
		return 1;
	else
		return 0;
}
int main() {
	int ans, num;
	Vector x, y;
	cout << "Enter values for vector v1 in terms of i,j and k : ";
	x.getdata();
	cout << "Enter values for vector v2 in terms of i,j and k : ";
	y.getdata();
	cout << "Vector v1 : "; x.display();
	cout << "Vector v2 : "; y.display();
	do {
		cout << "\tVector Comparison Operations \n1. == \n2. != \n3. > \n4. < \n5. <= \n6. >= \n7. Exit"
			<< "\nEnter any option : ";
		cin >> num;
		if (num == 1) {
			if (x == y) {
				cout << "v1 == v2";
			}
			else {
				cout << "v1 != v2";
			}
		}
		else if (num == 2) {
			if (x != y) {
				cout << "v1 != v2";
			}
			else {
				cout << "v1 == v2";
			}
		}
		else if (num == 3) {
			if (x > y) {
				cout << "v1 > v2";
			}
			else {
				cout << "v2 > v1";
			}
		}
		else if (num == 4) {
			if (x < y) {
				cout << "v1 < v2";
			}
			else {
				cout << "v2 < v1";
			}
		}	else if (num == 5) {
			if (x <= y) {
				cout << "v1 <= v2";
			}
			else {
				cout << "v2 <= v1";
			}
		}
		else if (num == 6) {
			if (x >= y) {
				cout << "v1 >= v2";
			}
			else {
				cout << "v2 >= v1";
			}
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