#include<iostream>
using namespace std;

float area(float );
int area(int ,int );
double area(double, float, int);
float area(long, int);
int area(int,unsigned int);
int main() {
	float a, f;
	double c;
	long w;
	unsigned int x;
	int b, l, h, r, i ;
	cout << "1. Radius of circle ";
	cin >> a;
	cout << "2. Length and breadth of rectangle ";
	cin >> l >> b;
	cout << "3. Length,breadth and height of cuboid ";
	cin >> c >> f >> h;
	cout << "4. Radius and height of cylinder ";
	cin >> w >> r;
	cout<<"5. Base and height of triangle ";
	cin >> i >> x;
	cout << "1. Area of circle: " << area(a) << endl << "2. Area of rectangle: " << area(l, b)
		<< endl << "3. Area of cuboid: "
		<< area(c, f, h) << endl << "4. Area of cylinder: " << area(w, r) 
		<< endl << "5. Area of triangle: " << area(i, x) << endl;
}
float area(float r) {
	return(r * 3.14 * r);	//circle
}
int area(int l, int b) {
	return(l * b);	//rectangle
}
double area(double l, float b, int h) {
	return(l * b * h);	//cuboid
}
float area(long h, int r) {
	return(3.14 * r * r * h);	//cylinder
}
int area(int b,unsigned int h) {
	return(0.5 * b * h);	//triangle
}