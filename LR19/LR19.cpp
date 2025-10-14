#include <iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(0, "");
	int i,j,n, a[20][20];
	cout << "\nВведите размерность матрицы: ";
	cin >> n;
	srand(time(0));
	cout << "\nМатрица А: " << endl;
	for (i = 0; i < n;i++) {
		for (j = 0;j < n;j++) {
			a[i][j] = rand() % 20 - 10;
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}

	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++) {
			if (i <= n - 1 - j) {
				swap(a[i][j], a[n-1-j][n-1-i]);
			}
		}
	}
	cout << "\nОтраженная матрица: " << endl;
	for (i = 0; i < n;i++) {
		for (j = 0;j < n;j++) {
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}
