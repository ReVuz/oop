#include<iostream>
using namespace std;
class matrix {
public:
	void matrix_add();
	void matrix_transpose();
	void matrix_multiply();
	void matrix_trace();
};
void matrix::matrix_add() {
	int a[10][10], b[10][10], sum[10][10];
	int m, n, i, j;
	cout << "Enter number of rows and coloumns of matrix : ";
	cin >> m >> n;
	cout << "Enter elements of first matrix : ";
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cout << "Enter elements of second matrix : ";
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> b[i][j];
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << "Sum of the two matrices is: ";
	cout << endl;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			cout << sum[i][j]<<" ";
		cout << endl;
	}
}
void matrix::matrix_transpose() {
	int a[10][10], m, n, i, j;
	cout << "Enter number of rows and coloumns of the matrix : ";
	cin >> m >> n;
	cout << "Enter elements : ";
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cout << "The entered Matrix is: \n";
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
			cout<< endl;
		
	}
	cout << "Transpose : \n";
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) 
			cout << a[j][i] << " ";
			cout << endl;
		
	}
}
void matrix::matrix_multiply() {
	int a[10][10], b[10][10], mult[10][10];
	int m, n, i, j;
	cout << "Enter number of rows and coloumns of matrix : ";
	cin >> m >> n;
	cout << "Enter elements of first matrix : ";
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cout << "Enter elements of second matrix : ";
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> b[i][j];
		}
	}
	int s;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			mult[i][j] = 0;
			for (s = 0; s < n; s++) {
				mult[i][s] += a[i][s] * b[s][j];
			}
		}
	}
	cout << "Multipliying both the matrices gives : \n";
	for (i = 0; i < m; i++) {
		for (s = 0; s < n; s++)
			cout << mult[i][s]<<" ";
		cout << endl;
	}
}
void matrix::matrix_trace() {
	int a[10][10],m,n,i,j, t = 0;
	cout << "Enter number of rows and coloumns of the matrix : ";
	cin >> m >> n;
	cout << "Enter elements : ";
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
			if (i == j) {
				t += a[i][j];
			}
		}
	}
	cout << "Trace of matrix is : " << t << endl;
}
int main() {
	matrix A;
	cout << "Transpose of Matrix \n";
	A.matrix_transpose();
	cout << "Addition of Matrix \n";
	A.matrix_add();
	cout << "Multiplication of Matrix \n";
	A.matrix_multiply();
	cout << "Trace of Matrix \n";
	A.matrix_trace();

	return 0;
}