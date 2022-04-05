#include <iostream>
using namespace std;

class Alpha {
	int** p;
	int d1, d2;
public:
	Alpha(int x, int y) {
		d1 = x;
		d2 = y;
		p = new int* [d1];	//Array of pointers
		for (int i = 0; i < d1; ++i) {
			p[i] = new int[d2];
		}
	cout << "Dynamic Initialization Succesful!" << endl;
	}
	void get_data();
	void put_data();
	~Alpha() {
		for(int i=0;i<d1;i++){
			delete p[i];
		}
			delete p;
			cout << "Memory Released!" << endl;
	}
};

void Alpha::get_data() {
	cout << "Enter the Values Row by Row" << endl;
	for (int i = 0; i < d1; ++i) {
		for (int j = 0; j < d2; ++j) {
			cin >> p[i][j];
		}
	}
}

void Alpha::put_data() {
	for (int i = 0; i < d1; ++i) {
		for (int j = 0; j < d2; ++j)
			cout << p[i][j] << " ";
		cout << endl;
	}
}



int main() {
	int row, col;
	cout << "Enter number of rows and coloumns of the matrix\n" << endl;
	cin >> row >> col;
	Alpha obj(row, col);
	obj.get_data();
	cout<<"Entered Matrix \n";
	
	obj.put_data();
	return 0;
}
