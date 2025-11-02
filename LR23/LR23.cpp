#include <iostream>
#include<ctime>
#include<iomanip>
using namespace std;

void create(int x[][20], int n, int m) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m; j++) {
			x[i][j] = rand() % 11 - 5;
			cout << setw(3) << x[i][j];
		}
		cout << endl;
	}
}

int sum(int x[][20], int n, int m) {
	int sum = 0;
	for (int i = 0;i < n;i++)
		for (int j = 0;j < m; j++) {
			if (x[i][j] < 0) sum += x[i][j];
		}
	return sum;
}

int main()
{
	setlocale(0, "");
	srand(time(0));
	int a[20][20], b[20][20], n, m;
	cout << "\n Будут созданы матрицы A(N,M) и B(M,N)." << endl;
	cout << "\n Введите число N: "; cin >> n;
	cout << "\n Введите число M: "; cin >> m;

	cout << "\nМатрица  А: " << endl;
	create(a, n, m);
	cout << "\nСумма отрицательных элементов матрицы А: " << sum(a, n, m) << endl;
	cout << "==================================================";

	cout << "\nМатрица  B: " << endl;
	create(b, m, n);
	cout << "\nСумма отрицательных элементов матрицы B: " << sum(b, m, n) << endl;
	cout << "==================================================";
}
