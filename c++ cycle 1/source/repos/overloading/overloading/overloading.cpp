#include<iostream>
using namespace std;
class string {
	char* p;
	int len;
public:
	string() { len = 0; p = 0; }
	string(const char *s);
	string(const string& s);
	~string() { delete p; }

	friend string operator+(const string& s, const string& t);
	friend int operator<=(const string& s, const string& t);
	friend void show(const string s);
};
string::string(const char *s) {

}