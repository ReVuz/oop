#include <iostream>
using namespace std;
class alpha {
	int x;
public:
	alpha(int i) 
	{ x = i;
	cout << "Alpha constructed succesfully" << endl;
	}
	void show_alpha(void) {
		cout << "x = " << x << endl;
	}
};
class beta {
	float p;
public:
	beta(float a) :p(a)
	{
		cout << "\nBeta constructed succesfully" << endl;
	}
	void show_beta(void) {
		cout << "p = " << p << endl;
	}
};
class gamma : public alpha,public beta {
	int u, v;
public:
	gamma(int a, int b, float c) :alpha(a * 2), beta(c), u(a) {
		v = b;
		cout << "\nGamma constructed succesfully" << endl;
	}
	void show_gamma(void) {
		cout << "u = " << u << endl;
		cout << "v = " << v << endl;
	}
};
int main()
{
	int m, n;
	float c;
	cout << "Enter any two integer values : ";
	cin >> m >> n;
	cout << "\nEnter a float value : ";
	cin >> c;
	cout << "\n";
	gamma g(m, n, c);
	cout << "\n\nDisplay Member values " << "\n\n";
	cout << "// x = " << m << "* 2"<<"\n";
	g.show_alpha();
	cout << "\n";
	g.show_beta();
	cout << "\n";
	g.show_gamma();

	return 0;
}