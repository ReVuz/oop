#include<iostream>
using namespace std;
class matrix {
	int** p;
	int row, col;
public:
	matrix(){};
	matrix(int r, int c);
	void getdata(){
		cout << "Enter elements of matrix row by row : \n";
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				int value;
				cin >> value;
				p[i][j] = value;
			}
		}
	}
	void display() {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << p[i][j]<<" ";
			}
			cout << endl;
		}
	}
	matrix operator+(matrix);
	matrix operator*(matrix);
};
matrix::matrix(int r, int c) {
	row = r; col = c;
	p = new int* [row + 1];
	for (int i = 0; i < col; i++) {
		p[i] = new int[col + 1];
	}
}
matrix matrix::operator+(matrix a) {
	matrix temp(row, col);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			temp.p[i][j] = p[i][j] + a.p[i][j];
		}
	}
	return temp;
}
matrix matrix::operator*(matrix a) {
	matrix temp(row, a.col);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < a.col; j++) {
			temp.p[i][j] = 0;
			for (int k = 0; k < a.row; k++) {
				temp.p[i][j] += p[i][k] * a.p[k][j];
			}
		}
	}
	return temp;
}
int main() {
	int ans, num;
	do {
		cout << "\tMatrix Operations \n1. Addition \n2. Multiplication \n3. Exit \nEnter any option : ";
		cin >> num;
		if (num != 3) {
			int r1, c1, r2, c2;
			cout << "Enter number of rows and coloumns for first matrix : ";
			cin >> r1 >> c1;
			matrix A(r1, c1);
			A.getdata();
			cout << "Enter number of rows and coloumns for second matrix : ";
			cin >> r2 >> c2;
			matrix B(r2, c2);
			B.getdata();
			if (num == 1) {
				if (r1 == r2 && c1 == c2) {
					matrix C(r1, c1);
					C = A + B;
					cout << "Addition of the two matrices gives : " << endl;
					C.display();

				}
				else {
					cout << "Addition not possible !!!" << endl;
				}
			}
			else if (num == 2) {
				if (c1 == r2) {
					matrix D(r2, c1);
					D = A * B;
					cout << "Multiplication of the two matrices gives : " << endl;
					D.display();
				}
				else {
					cout << "Multiplication not possible !!!" << endl;
				}
			}
		}
		cout << "Do you want to continue ?(1/0) ";
		cin >> ans;
	} while (ans);
	cout << "Thank you ";
	return 0;
}