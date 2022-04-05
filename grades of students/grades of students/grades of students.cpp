#include <iostream>
using namespace std;
class students {
	char name[20];
	int Roll_no;
	int a, b, c;
public:
	void input();
	int calcgrade(void);
	void display();
};
void students::input(void) {
		cout << "Enter name of the student ";
		cin >> name;
		cout << "Enter Roll number ";
		cin >> Roll_no;
		cout << "Enter marks of 3 subjects ";
		cin >> a >> b >> c;
}
void students::display() {

		cout << "\nDetails of student " << name << ": " << endl;
		cout << "Name: " << name << endl << "ROll no: " << Roll_no << endl;
}
int students::calcgrade(void){
	int d;
	d = (a + b + c) / 3;
	cout << "Overall marks obtained: " <<d<< endl;
	if (d >= 90) {
		cout << "Grade: A" << endl;
	}
	if (d >= 80 && d < 90) {
		cout << "Grade: B" << endl;
	}
	if (d >= 70 && d < 80) {
		cout << "Grade: C" << endl;
	}
	if (d >= 60 && d < 70) {
		cout << "Grade: D" << endl;
	}
	if (d >= 40 && d < 50) {
		cout << "Grade: E" << endl;
	}
	return d;
}
int main(){
	students z[10];
		int c, i;
		cout << "Enter number of students: ";
		cin >> c;
		for (i = 0; i < c; i++) {
			z[i].input();
		}
		for (i = 0; i < c; i++) {
			z[i].display();
			z[i].calcgrade();
		}
	cout << "Thank you";
	return 0;

}

