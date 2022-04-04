#include <iostream>
using namespace std;
class Time {
	int hours, minutes, seconds;
	int i, j;
public:
	void getdata(int h, int m, int s) {
		hours = h;
		minutes = m;
		seconds = s;
	}
	void putdata(void) {
		cout << hours << " hours : " << minutes << "minutes : " << seconds << "seconds";
	}
	void sum(int, int,int);
};
void Time::sum(int a, int b,int c) {
	hours = seconds / 3600;
	seconds = seconds % 3600;
	minutes = seconds / 60;
	minutes = a.minutes + b.minutes + c.minutes;
	seconds = a.seconds + b.seconds + c.seconds;
	hours = a.hours + b.hours + c.hours;

}
int main() {
	Time p, q;
	int x, y, z;
	cout << "Enter Time1 in hrs:mins:secs ";
	cin >> x >> y >> z;
	p.getdata(x, y, z);
	cout << "Enter Time2 in hrs:mins:secs ";
	int d, e, f;
	cin >> d >> e >> f;
	q.getdata(d, e, f);
	p.sum(x, y, z);
	q.sum(d, e, f);
	cout << "Time1 = "; p.putdata();
	cout << "Time2 = "; q.putdata();
	cout << "Sum of time1 and time2 = "; r.putdata();
	return 0;
}