#include <iostream>
using namespace std;
class static_fn {
	static int count;
public:
	static void showcount()
	{
		cout << count;
	}
	static_fn(){
		count++;
	}
};
int static_fn::count = 0;
int main()
{int ans;
	do{
	static_fn a;
	cout << "Number of objects created: "; a.showcount();
	cout<<"\nDo you want to continue ?(1/0) ";
	cin>>ans;
	}while(ans);
		cout<<"Thank you";
	return 0;
}
