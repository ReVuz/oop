#include <iostream>
using namespace std;
class static_fn {
	static int count;
public:
	static void showcount()
	{
		count++;
	}
	void displayCount() {
		cout << count;
	}
};
int static_fn::count = 0;
int main()
{
	static_fn a;
	cout << "Number of objects created: "; a.showcount();
	static_fn::showcount();
	a.displayCount();
}