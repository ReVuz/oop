#include<iostream>
using namespace std;
const int m = 50;
class store {
	int itemcode[m];
	float itemprice[m];
	int count;
public:
	void cnt(void) { count = 0; }
	void getitem(void);
	void remove(void);
	void displayitems(void);
	void displaysum(void);
};
void store::getitem(void) {
	cout << "Enter item code : ";
	cin >> itemcode[count];

	cout << "Enter item cost : ";
	cin >> itemprice[count];
	count++;
}
void store::displaysum(void) {
	float sum = 0;
	int i;
	for (i = 0; i < count; i++)
		sum = sum + itemprice[i];
	cout << "Total value : " << sum;
}
void store::remove(void) {
	int a;
	cout << "Enter item code : ";
	cin >> a;
	int i;
	for (i = 0; i < count; i++)
		if (itemcode[i] == a)
			itemprice[i] = 0;
}
void store::displayitems(void) {
	cout << "\nCode Price\n";
	int i;
	for (i = 0; i < count; i++) {
		cout << "\n" << itemcode[i];
		cout << "  " << itemprice[i];
	}
	cout << endl;
}
int main() {
	store s;
	s.cnt();
	int x;
	do {
		cout << "\nWelcome to ABC store!!! "
			<< "\n1. Add an item \n2. Display total value "
			<< "\n3. Delete an item \n4. Display all items "
			<< "\n5. Quit"
			<< "\nPlease choose options from below : ";
		cin >> x;
		switch (x) {
		case 1:s.getitem(); break;
		case 2:s.displaysum(); break;
		case 3:s.remove(); break;
		case 4:s.displayitems(); break;
		case 5:cout << "Thank you  see again"; break;
		default:cout << "Error 404! \tNot found ";
		}
			
	} while (x != 5);
	return 0;
}