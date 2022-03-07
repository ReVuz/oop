#include<iostream>
using namespace std;
void len(string s) {
	int i;
	for (i = 0; s[i]; i++)
		;
		cout << i << endl;
}
int main() {
	string s1, s2, s3;
	cout << "Enter any two words "<<endl;
	cin >> s1 >> s2;
	if (s1 == s2)
		cout << "Both are same " << endl;
	else
		cout << "Both are different " << endl;
	s3 = s1 + s2;
	cout << s1 << " + " << s2 <<" = " << s3 << endl;
	if (s1 > s2)
	{
		cout << s1 << " is greater in length" << endl;
		cout << "Length of " << s1 << " = "; len(s1);
		cout<< endl;
	}
	else
		cout << s2 << " is greater in length" << endl;
	cout << "Length of " << s2 << " = "; len(s2);
	cout<< endl;
	return 0;
}