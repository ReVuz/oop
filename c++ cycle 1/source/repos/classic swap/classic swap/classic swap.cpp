#include<iostream>
using namespace std;
class class_2;
class class_1 {
	int v1;
public:
	void intdata(int a) { v1 = a;}
	void  display(void) { cout << v1 << endl; }
	friend void exchange(class_1&, class_2&);
};
class class_2 {
	int v2;
public:
	void intdata(int a) { v2 = a; }
	void display(void) { cout << v2 << endl; }
	friend void exchange(class_1&, class_2&);

};
void exchange(class_1&x, class_2& y) {
	int temp = x.v1;
	x.v1 = y.v2;
	y.v2 = temp;
}
int main() {
	class_1 a;
	class_2 b;
	cout << "Enter any value for class_1 : ";
	int p;
	cin >> p;
	a.intdata(p);
	cout << "Enter any value for class_2 : ";
	int q;
	cin >> q;
	b.intdata(q);
	cout << "Values before exchange : "<<endl;
	cout << "class_1 : "; a.display();
	cout << "class_2 : "; b.display();
	exchange(a, b);
	cout << "Values after exchange : "<<endl;
	cout << "class_1 : "; a.display();
	cout << "class_2 : "; b.display();

	return 0;
}