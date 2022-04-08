#include<iostream>
using namespace std;
const int m = 50;
class item {
	string  itemname[m];
	int itemcode[m];
	float itemprice[m];
	int itemquantity[m];
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
	cout << "How many items do you want to add : ";
	cin >> ad;
	for (int i = 0; i < ad; i++) {
		cout << "Item " << i + 1 << endl;
		cout << "Enter item code : ";
		cin >> itemcode[count];

		cout << "Enter item name : ";
		cin >> itemname[count];

		cout << "Enter item cost : ";
		cin >> itemprice[count];

		cout << "Enter item quantity : ";
		cin >> itemquantity[count];
		count++;
	}
}
void item::buyitem(void) {
	float sum = 0;
	int i, num,q,cnt=0;
	cout << "Enter the number of items : ";
	cin >> num;
	int code[num];
	for (i = 0; i < num; i++) {
		cout << "Enter the itemcode which you want to buy : ";
		cin >> code[i];
		for (int j = 0; j < count; j++) {
			if (code[i] == itemcode[j]) {
				cout << "Enter the item quantity : ";
				cin >> q;
				if(q>itemquantity[j]){
					cout<<"Error : \nAvailable quantity :"
					<<itemquantity[j]<<endl;
					break;
					}
				else{
				sum = sum + itemprice[j]*q;
				itemquantity[j] = itemquantity[j] - q;
				cnt++;
				}
			}
		}
	}
	if(count!=num){
		cout<<"\nSome items may not be Available";
		}
	else
		;
	cout<<"\nDo you want to print the bill ?(1/0) ";
	int b;
	cin>>b;
	if(b==1){
	
	cout << "\nSL No \tName \tCode \tCost(per item)" 
	<<"\tQuantity \t Total Cost " 
	<< endl;
	for (i = 0; i < num; i++) {
		for (int j = 0; j < count; j++) {
			if (code[i] == itemcode[j]) {
				cout <<"\n"<<i<<"\t"<< itemname[j] 
				<< "\t" << itemcode[j]
				<< "\t" <<itemprice[j]<<"\t"
				<<q<<"\t\t" << itemprice[j]*q << endl;
			}
		}
	}
	cout << "Total bill : " << sum;
	}
	else
		;
}
void item::itemremove(void) {
	int a;
	cout << "Enter item code : ";
	cin >> a;
	int i;
	for (i = 0; i < count; i++) {
		if (itemcode[i] == a) {
			for (int j = a; j < count; j++) {
				itemprice[i] = itemprice[i + 1];
				itemname[i] = itemname[i + 1];
				itemcode[i] = itemcode[i + 1];
				itemquantity[i] = itemquantity[i + 1];
			}
			count--;
			cout << "Item removed successfully " << endl;
			break;
		}
		else
			cout << "Item not found " << endl;
		break;
	}

}
void item::displayitems(void) {
	cout << "\n" << "SL nO \tCode \tName \tQuantity \tPrice";
	int i;
	for (i = 0; i < count; i++) {
		cout << "\n" << i + 1 << "\t" << itemcode[i] << "\t" << itemname[i] << "\t" <<itemquantity[i]<<"\t\t"<< itemprice[i];
	}
	cout << endl;
}
int main() {
	item s;
	s.cnt();
	int x, ans;
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
		if(x!=5){
		cout << "\nDo you want to continue ?(1/0) ";
		cin >> ans;
		}

	} while (ans);
	cout << "Thank you  see again";
	return 0;
}
