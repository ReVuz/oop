#include<iostream>
using namespace std;
class shape {
protected:
	double area;
public:
	virtual void get_area(void) {};
	virtual void show(void) {};
};
class circle :public shape {
	float r;
public:
	void get_area(void){
		cout << "Enter radius of circle : ";
		cin >> r;
		area = 3.14 * r * r;
	}
	void show(void) {
		cout << "Area of Circle : " << area<<endl;
	}
};
class square :public shape {
	float a;
public:
	void get_area(void) {
		cout << "Enter side of square : ";
		cin >> a;
		area = a * a;
	}
	void show(void) {
		cout << "Area of square : "<<area<<endl;
	}
};
class rectangle : public shape {
	float l, b;
public:
	void get_area(void) {
		cout << "Enter length and breadth of rectangle : ";
		cin >> l >> b;
		area = l * b;
	}
	void show(void) {
		cout << "Area of rectangle : " << area << endl;
	}
};
class ellipse : public shape {
	float major, minor;
public:
	void get_area(void) {
		cout << "Enter the length of major axis : ";
		cin >> major;
		cout << "Enter the length of minor axis : ";
		cin >> minor;
		area = 3.14 * major * minor;
	}
	void show() {
		cout << "Area of ellipse : " << area << endl;
	}
};
int main() {
	int ans;
	do {
		cout << "\n\tArea of different shapes \nAvailable options  : \n1. Circle \n2. Square \n3. Rectangle \n4. Ellipse \n5. Exit"
			<< "\nChoose from above : ";
		int num;
		cin >> num;
		shape* ptr;
		switch (num) {
		case 1:
		{
			ptr = new circle;
			ptr->get_area();
			ptr->show();
			break;
		}
		case 2:
		{
			ptr = new square;
			ptr->get_area();
			ptr->show();
			break;
		}
		case 3:
		{
			ptr = new rectangle;
			ptr->get_area();
			ptr->show();
			break;
		}
		case 4:
		{
			ptr = new ellipse;
			ptr->get_area();
			ptr->show();
			break;
		}
		case 5:
		{
			break;
		}
		default:
			cout << "Error 404 : Not Found ";
			break;
		}
		cout << "Do you want to continue ?(1/0) ";
		cin >> ans;

	} while (ans);
			 cout << "Thank you";
			  return 0;
	
}