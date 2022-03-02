#include <iostream>
using namespace std;
class time {
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
	void sum(time, time,time);
};
void time::sum(time a, time b,time c) {
	hours = seconds / 3600;
	seconds = seconds % 3600;
	minutes = seconds / 60;
	minutes = a.minutes + b.minutes + c.minutes;
	seconds = a.seconds + b.seconds + c.seconds;
	hours = a.hours + b.hours + c.hours;

}
int main() {
	time p, q, r1,r2 ;
	int x, y, z;
	cout << "Enter time1 in hrs:mins:secs ";
	cin >> x >> y >> z;
	p.getdata(x, y, z);
	cout << "Enter time2 in hrs:mins:secs ";
	int d, e, f;
	cin >> d >> e >> f;
	y.getdata(d, e, f);
	r1.sum(x, y, z);
	r2.sum(d, e, f);
	cout << "P = "; p.putdata();
	cout << "Q = "; q.putdata();
	cout << "R = "; r.putdata();
	return 0;
}