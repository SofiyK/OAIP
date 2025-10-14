#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, n, a[20][20], max, min, imax = 0, jmax = 0, imin = 0, jmin = 0, k, c, b;
	cout << "\nВведите количество столбцов: ";
	cin >> c;
	cout << "\nВведите количество строк: ";
	cin >> b;
	srand(time(0));
	cout << "\nМатрица А: " << endl;
	for (i = 0; i < b;i++) {
		for (j = 0;j < c;j++) {
			a[i][j] = rand() % 20 - 10;
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}

	max = a[0][0];
	min = a[0][0];

	for (i = 0;i < b;i++)
		for (j = 0;j < c;j++) {
			if (a[i][j] > max) {
				max = a[i][j];
				imax = i;
				jmax = j;
			}
			if (a[i][j] < min) {
				min = a[i][j];
				imin = i;
				jmin = j;
			}
		}

	cout << "\nМаксимальный элемент матрицы: " << a[imax][jmax] << " с индексами " << imax +1
		<< " " << jmax + 1 << endl;
	cout << "\nМинимальный элемент матрицы: " << a[imin][jmin] << " с индексами " << imin+1
		<< " " << jmin+1 << endl;

	swap(a[imax][jmax], a[imin][jmin]);

	cout << "\nИзмененная матрица: " << endl;
	for (i = 0; i < b;i++) {
		for (j = 0;j < c;j++) {
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}