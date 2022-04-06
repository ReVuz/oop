#include <iostream>
using namespace std;

// Abstract class
class shape {
protected:
	double area;
public:
	virtual void get_area()=0;	//pure virtual function
	virtual void show()=0;		//pure virtual function
};
//Derived class
class circle :public shape {
	float r;
public:
	void get_area(void) {
		cout << "Enter radius of circle : ";
		cin >> r;
		area = 3.14 * r * r;
	}
	void show(void) {
		cout << "Area of Circle : " << area << endl;
	}
};
int main() {
    shape *ptr;
    circle c;
    ptr=&c;
	ptr->get_area();
	ptr->show();

 
    return 0;
}
