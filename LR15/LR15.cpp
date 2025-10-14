#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
	setlocale(0, "");
	int count = 0, i, n;
	double max, sum = 0, a[100], first = 101, second = 102, num;
	srand(time(0));
	cout << "\nВведите размерность массива: ";
	cin >> n;
	cout << "\nМассив а: ";

	for (i = 0; i <= n - 1; i++)
	{		
		a[i] = rand() % 100 - 50;
		cout <<" "<< a[i];
	}
	max = a[0];

	for (i = 0; i <= n - 1; i++)
	{
		if (max < abs(a[i]))
			max = abs(a[i]);

		if (a[i] > 0)
		{
			if (count == 0)
			{
				first = i;
				count++;
			}
			else if (count == 1)
			{
				second = i;
				count++;
			}
		}
	}
	
	if (first != 101 && second != 102) { //проверка на существование first и second
		for (i = first + 1; i <= second - 1; i++) {
			sum += a[i];
		}
	}
	else {
		cout << "\nПоложительных элементов в массиве либо нет, либо он только один."<<endl;
	}
	cout << "\nmax = " << max << endl;
	cout << "\nsum = " << sum << endl;
}
