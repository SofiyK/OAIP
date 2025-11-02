#include <iostream>
#include<string>
#include<iomanip>
#ifdef _WIN32
#include<Windows.h>
#endif
using namespace std;
using std::string;

class Metal {
	string name;
	int number;
	double temp;
	double vaz;
public:
	Metal() { number = 0; temp = 0; vaz = 0; }
	Metal(string a, int b, double c, double d);
	void get(string &a, int &b, double &c, double &d) const;
	void show(void) const;
	bool operator == (Metal me2);
	Metal operator+ (Metal me2);
};

Metal Metal::operator + (Metal me2) {
	Metal me;
	int i, j;
	me.name = name + me2.name;
	me.number = number + me2.number;
	me.temp = temp + me2.temp;
	me.vaz = vaz + me2.vaz;
	return me;
}

bool Metal::operator == (Metal me2) {
	if (name == me2.name && number == me2.number
		&& temp == me2.temp && vaz == me2.vaz) {
		return 1;
	}	
	else return 0;
}

void Metal::get(string &a, int& b, double& c, double& d) const {
	a = name;
	b = number;
	c = temp;
	d = vaz;
}

void Metal::show(void) const {
	cout << setw(21) << left << name << " | ";
	cout << setw(13) << number << " | ";
	cout << setw(20) << temp << " | ";
	cout << setw(19) << vaz << " | ";
}

Metal::Metal(string a, int b, double c, double d) {
	name = a;
	number = b;
	temp = c;
	vaz = d;
}

int main()
{
#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif
	string n;
	int  i, num;
	short a, b;
	double t, v;
	const int N = 3;
	Metal obj[N]{ 
		Metal("Алюминий",13,700,2.90),
		Metal("Висмут",83,304,1.65),
		Metal("Свинец",82,441,2.11)
	};

	cout << "===================================================================================";
	cout << "\nВещество             | Атомный номер | Температура (град.С) | Вязкость (кг/м*сек) |\n";
	cout << "===================================================================================\n";
	for (i = 0;i < N;i++) {
		obj[i].show();
		cout << endl;
	}
	cout << "-----------------------------------------------------------------------------------\n";


	cout << "\nПерегрузка оператора соответствия '=='. \n"
		<< "Введите номера экземпляров класса, которые надо сравнить> ";
	cin >> a;
	cin >> b;
	if (obj[a] == obj[b]) {
		cout << "Экземпляры класса равны";
	}
	else cout << "\nЭкземпляры класса не равны";

	cout << "\nПерегрузка оператора суммы '+'. \n"
		<< "Введите номера экземпляров класса, которые надо сложить> ";
	cin >> a;
	cin >> b;
	
	Metal testobj;
	testobj = obj[a] + obj[b];
	cout << "===================================================================================";
	cout << "\nВещество             | Атомный номер | Температура (град.С) | Вязкость (кг/м*сек) |\n";
	cout << "===================================================================================\n";
	testobj.show();
	cout << "\n-----------------------------------------------------------------------------------\n";
	testobj.get(n, num, t, v);
	cout << endl;
}
