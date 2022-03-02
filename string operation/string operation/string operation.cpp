#include<iostream>
#include<cstring>
using namespace std;
class string 
{
	char *p;
	int len;
public:
	string() { len = 0; p = 0; }
    string(const char *s);
	string(const string & s);
	~ string() { delete p;}
	
	friend string operator+(const string &s, const string &t);
	
	friend int operator<=(const string &s, const string &t);
	friend void show(const string s);
};
 string :: string(const char *S)
{
	len = strlen(S);
	p = new char[len + 1];
	strcpy(p, s);
}
string::string(const string &s)
{
	len = s.len;
	p = new char[len + 1];
	strcpy(p, s.p);
}
string operator+(const string &s, const string &t)
{
	string temp;
	temp.len = s.len + t.len;
	temp.p = new char[temp.len + 1];
	strcpy(temp.p, s.p);
	strcat(temp.p, t.p);
	return temp;
}
int operator<=(const string &s, const string &t)
{
	int m = strlen(s.p);
	int n = strlen(t.p);
	if (m <= n) return (1);
	else return(0);
}
void show(const string s)
{
	cout << s.p;
}
int main() {
	string s1, s2, s3;
	cout << "Enter any 3 words ";
	cin >> s1 >> s2 >> s3;
	string t1, t2, t3;
	t1 = s1;
	t2 = s2;
	t3 = s1 + s3;
	cout << "t1= "; show(t1);
	cout << "\nt2= "; show(t2);
	cout << "\nt3= "; show(t3);
	if (t1 <= t3) {
		show(t3);
		cout << " smaller than ";
		show(t1);

	}
	else {
		show(t1);
		cout << " smaller than ";
		show(t3);

	}
	return 0;
}