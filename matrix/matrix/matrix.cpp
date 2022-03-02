#include<iostream>
using namespace std;
class matrix {
	int** p;
	int d1, d2;
public:
	matrix(int x, int y);
	void getelement( int i, int j, int val )
	{
		p[i][j] = val;
	}
	int& putelement(int i, int j) {
		return p[i][j];
	}
	void matrix_transpose();
};
matrix::matrix(int x, int y)
{
	d1 = x;
	d2 = y;
	p = new int* [d1];
	for (int i = 0; i < d1; i++)
		p[i] = new int[d2];
}
void matrix::matrix_transpose(){
	int t[10][10], a[6][6];
	for(int i=0;i<d1;i++)
		for (int j = 0; j < d2; j++) {
			t[j][i] = a[i][j];
		}
	cout << "The transpose of the matrix is: " << endl;
	for (int i = 0; i < d1; i++)
		for (int j = 0; j < d2; j++) {
			cout << t[i][j] << " " << endl;
		}
}
int main() {
	int m, n;
	cout << "Enter size of matrix : "<<endl;
	cin >> m >> n;
	matrix A(m, n);
	cout << "Enter matrix elements row by row : " << endl;
	int i, j, value;
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++) {
			cin >> value;
			A.getelement(i, j, value);
		}
	cout << "Enter size of another matrix : " << endl;
	int o, p;
	cin >> o >> p;
	matrix B(o, p);
	cout << "Enter matrix elements row by row : " << endl;
	int k, l, valuee;
	for (k = 0; k < o; k++)
		for (l = 0; l < p; l++) {
			cin >> valuee;
			B.getelement(k, l, valuee);
		}
	cout << "Matrix A: "; A.putelement(i,j);
	cout << "\nMatrix B: "; B.putelement(k, l);
	cout << "\nTranspose A: "; A.matrix_transpose();
	cout << "\nTranspose B: "; B.matrix_transpose();

	return 0;
}