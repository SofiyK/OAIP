#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
	setlocale(0, "");
	int i,j, n, num, k, a[100];
	srand(time(0));
	cout << "\nВведите размерность массива: ";
	cin >> n;
	cout << "\nМассив а: " << endl;
	for (i = 0; i <= n - 1; i++)
	{	
		num = rand() % 100 - 50;
		if (num <= 0) {
			a[i] = 0;
		}
		else {
			a[i] = num;
		}
		cout << " " << a[i];
	}

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] == 0 && a[j + 1] != 0) {
				swap(a[j], a[j + 1]);
			}
		}
	}

	cout << "\nОтсортированный массив: "<< endl;
	for (i = 0; i <= n - 1; i++)
	{
		cout << " " << a[i];
	}
}