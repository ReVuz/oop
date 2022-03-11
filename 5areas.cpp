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
	cout<<"Choose from the options below : \n1. Area of circle \n2. Area of rectangle \n3. Area of cuboid \n4. Area of cylinder \n5. Area of triangle \nEnter any number : ";
	int num;
	cin>>num;
	if (num==1){
	cout << "Radius of circle ";
	cin >> a;
	cout << "Area of circle: " << area(a)<<endl;
	}
	if (num==2){
	cout << "Enter Length and breadth of rectangle ";
	cin >> l >> b;
	cout<< "Area of rectangle: " << area(l, b)<< endl;
	}
	if(num==3){ 
	cout << "Enter Length,breadth and height of cuboid ";
	cin >> c >> f >> h;
	cout<< "Area of cuboid: "<< area(c, f, h) << endl;
	}
	if (num==4){
	cout << "Enter Radius and height of cylinder ";
	cin >> w >> r;
	cout<< "Area of cylinder: " << area(w, r)<< endl;
	} 
	if(num==5){
	cout<<"Base and height of triangle ";
	cin >> i >> x;
	cout<< "Area of triangle: " << area(i, x) << endl;
	}
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
