#include <iostream>
using namespace std;
class student {
protected:
	int r_no;
public:
	void get_num(int a) {
		r_no = a;
	}
	void put_num(void) {
		cout << "\n\nDetails : \n\tRoll number : " << r_no << endl;
	}
};
class test : public student {
protected:
	float mark1, mark2;
public:
	void get_marks(float x, float y) {
		mark1 = x; mark2 = y;
	}
	void put_marks(void) {
		cout << "\nMarks Obtained : " << "\n\n";
		cout << "\tEnglish : " << mark1 << "\n";
		cout << "\tEVS : " << mark2 << "\n";
	}
};
class sports{
protected:
	float score;
public:
	void get_score(float s) {
		score = s;
	}
	void put_score(void) {
		cout << "\tSports : " << score << "\n\n";
	}
};
class result : public test, public sports {
	float total;
public:
	void display(void) {
		total = mark1 + mark2;
		put_num();
		put_marks();
		put_score();
		cout << "\nTotal Marks : " << total << "/200" << "\n";
	};
};

int main()
{
	result details;
	cout << "\nEnter roll number of student: ";
	int r;
	cin >> r;
	details.get_num(r);
	cout << "\nEnter Marks in English and EVS(float): ";
	float eng, evs;
	cin >> eng >> evs;
	details.get_marks(eng, evs);
	cout << "\nEnter score in sports(float): ";
	float Score;
	cin >> Score;
	details.get_score(Score);
	details.display();
	return 0;
}