#include <iostream>
#include <cstring>

using namespace std;

class String
{
	char* str;
	int len;
public:
	String() {
		len = 0;
		str = new char[len + 1];
	}
	String(const char* s)
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	void input() { cin >> str; }
	void add(String a, String b);
	void get_len();
	void compare(String s1, String S2);
};

void String::add(String a, String b)
{
	len = a.len + b.len;
	delete str;
	str = new char[len + 1];
	strcpy(str, a.str);
	strcat(str, b.str);
	cout << str;
}

void String::get_len()
{
	cout << strlen(str);
}

void String::compare(String s1, String s2)
{
	int m, n;
	m = strlen(s1.str);
	n = strlen(s2.str);
	if (m < n)
		cout << s1.str << " is smaller than " << s2.str << endl;
	else if (m = n)
		cout <<"Length of "<< s1.str<<" and "<< s2.str <<" are equal"<< endl;
	else
		cout << s1.str << " is smaller than " << s2.str << endl;
}

int main()
{
	String Str1, Str2, Str3;
	int ans;
		cout << "Enter the first string : ";
		Str1.input();
		cout << "\nEnter second string : ";
		Str2.input();
	do {
		
		cout << "\n\nString Operations "
			"\nHere are some of the options available : "
			"\n1. Concatenation of string "
			"\n2. Finding the length of both the strings  "
			"\n3. Finding the length of concatenated string"
			"\n4. Compare the strings"
			"\n5. Exit "
			"\n Choose any number ";
		int num;
		cin >> num;
		if (num == 1) {
			cout << "Concatenating the two strings gives : ";
			Str3.add(Str1, Str2);
		}
		else if (num == 2) {
			cout << "\nlen of first string : \n";
			Str1.get_len();
			cout << "\nlen of second string : ";
			Str2.get_len();
		}
		else if (num == 3) {
			cout << "\nlen of concatnated string : ";
			Str3.get_len();
		}
		else if (num == 4) {
			cout << "Comparison of string : ";
			Str3.compare(Str1, Str2);
		}
		else
		  break;
		  
		cout << "\nDo you want to continue ? \nIf yes,press 1 "
			"\nElse press 0 : ";
		cin >> ans;
	} while (ans);
	cout << "\nThank you,See again "<<endl;
	return 0;
}
