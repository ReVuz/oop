#include<iostream>
using namespace std;
const int m = 50;
class item {
	string  itemname[m];
	int itemcode[m];
	float itemprice[m];
	int count;
public:
	void cnt(void) { count = 0; }
	void getitem(void);
	void itemremove(void);
	void displayitems(void);
	void buyitem(void);
};
void item::getitem(void) {
    int ad;
    cout<<"How many items do you want to add : ";
    cin>>ad;
    for (int i=0;i<ad;i++){
    	cout<<"Item "<<i+1<<endl; 
	cout << "Enter item code : ";
	cin >> itemcode[count];
	
	cout<<"Enter item name : ";
	cin>>itemname[count];

	cout << "Enter item cost : ";
	cin >> itemprice[count];
	count++;
    }
}
void item::buyitem(void) {
	float sum = 0;
	int i,code;
	cout<<"Enter the itemcode which you want to buy : ";
	cin>>code;
	for (i = 0; i < count; i++){
	    if(code == itemcode[i]){
	     		sum = sum + itemprice[i];
	     		break;
	    }
	    else
	        cout<<"Item not found "<<endl;
	}
	cout << "Bill : " << sum<<endl;
}
void item::itemremove(void) {
	int a;
	cout << "Enter item code : ";
	cin >> a;
	int i;
	for (i = 0; i < count; i++){
		if (itemcode[i] == a){
		    for(int j=a;j<count;j++){
			itemprice[i] = itemprice[i+1];
			itemname[i]=itemname[i+1];
			itemcode[i]=itemcode[i+1];
		        
		    }
		    count--;
		    cout<<"Item removed successfully "<<endl;
		    break;
		}
		else
	      cout<<"Item not found "<<endl;
	}
	
}
void item::displayitems(void) {
    cout << "\n" << "SL nO \tCode \tName \tPrice";
	int i;
	for (i = 0; i < count; i++) {
		cout << "\n" <<i+1<<"\t"<<itemcode[i]<<"\t"<<itemname[i]<<"\t"<< itemprice[i];
	}
	cout << endl;
}
int main() {
	item s;
	s.cnt();
	int x,ans;
	do {
		cout << "\n\tABC Departmental Store "
			<< "\n1. Add an item \n2. Buy an item "
			<< "\n3. Delete an item \n4. Display Stock "
			<< "\n5. Quit"
			<< "\nPlease choose options from below : ";
		cin >> x;
		switch (x) {
		case 1:s.getitem(); break;
		case 2:s.buyitem(); break;
		case 3:s.itemremove(); break;
		case 4:s.displayitems(); break;
		case 5: break;
		default:cout << "Error 404! \tNot found ";
		}
		cout<<"\nDo you want to continue ?(1/0) ";
		cin>>ans;
			
	} while (ans);
	cout << "Thank you  see again";
	return 0;
}
