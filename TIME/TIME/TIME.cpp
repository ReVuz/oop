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
	void sum(Time, Time);
};
void Time::sum(Time a, Time b) {
	seconds = a.seconds + b.seconds+(a.minutes + b.minutes) * 60 +(a.hours + b.hours) * 3600;	
	hours = seconds / 3600;
	seconds = seconds % 3600;
	minutes = seconds / 60;
}
int main() {
	Time p, q, r;
	int x, y, z;
	cout << "Enter Time1 in hrs:mins:secs ";
	cin >> x >> y >> z;
	p.getdata(x, y, z);
	cout << "Enter Time2 in hrs:mins:secs ";
	int d, e, f;
	cin >> d >> e >> f;
	q.getdata(d, e, f);
	r.sum(p, q);
	cout << "First Time = "; p.putdata();cout<<endl;
	cout << "Second Time = "; q.putdata();cout<<endl;
	cout << "sum = "; r.putdata();cout<<endl;
	return 0;
}
