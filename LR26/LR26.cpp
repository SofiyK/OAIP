#include <iostream>
#include<string>
#include<iomanip>
#include<Windows.h>
using namespace std;

class Metal {
	string name;
	int number;
	double temp;
	double vaz;
public:
	void set(string a, int b, double c, double d);
	void get(string a, int b, double c, double d);
	void show(void);
};

void Metal::set(string a, int b, double c, double d) {
	name = a;
	number = b;
	temp = c;
	vaz = d;
}

void Metal::get(string a, int b, double c, double d) {
	a = name;
	b = number;
	c = temp;
	d = vaz;
}

void Metal::show(void) {
	cout << setw(8) << name << " | ";
	cout << setw(13) << number << " | ";
	cout << setw(20) << temp << " | ";
	cout << setw(19) << vaz << " | ";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string n;
	int num, i,k;
	double t, v;
	const int N = 3;
	Metal obj[N];
	cout << "\nФункция SET\n";
	for (i = 0;i < N;i++) {
		cout << "\nВещество, Атомный номер, Температура (град.С), Вязкость (кг/м*сек): ";
		cin >> n; 
		cin >> num;
		cin >> t;
		cin >> v;
		obj[i].set(n, num, t, v);
	}

	cout << "\nФункция SHOW\n";
	cout << "\nВещество | Атомный номер | Температура (град.С) | Вязкость (кг/м*сек) |\n";
	cout << "=======================================================================\n";
	for (i = 0;i < N;i++) {
		obj[i].show();
		cout << endl;
	}
	cout << "-----------------------------------------------------------------------\n";

	cout << "\nФункция GET и SHOW:\n";
	cout << "\nВещество | Атомный номер | Температура (град.С) | Вязкость (кг/м*сек) |\n";
	cout << "=======================================================================\n";
	for (i = 0;i < N;i++) {
		obj[i].get(n, num, t, v);
		obj[i].show();
		cout << endl;
	}
	cout << "-----------------------------------------------------------------------\n";
}
//Алюминий 13 700 2.90
//Висмут 83 304 1.65
//Свинец 82 441 2.11