#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(0, "");
	int n, i;
	srand(time(0));
	cout << "\nВведите количество студентов: ";
	cin >> n;
	struct student {
		int math;
		int chem;
		int phys;
		int step;
	};
	student stud[20];


	for (i = 0;i < n;i++) {
		cout << "\nОценки студента " << i + 1 << ": " << endl;
		stud[i].math = rand() % 3 + 3;
		stud[i].chem = rand() % 3 + 3;
		stud[i].phys = rand() % 3 + 3;
		cout << "Math: " << stud[i].math << endl;
		cout << "Chem: " << stud[i].chem << endl;
		cout << "Phys: " << stud[i].phys << endl;
		cout << "=============================================";
		if (stud[i].math == 5 && stud[i].chem == 5 && stud[i].phys == 5)
			stud[i].step = 2;
		else if (stud[i].math == 3 || stud[i].chem == 3 || stud[i].phys == 3)
			stud[i].step = 0;
		else stud[i].step = 1;
	}

	for (i = 0; i < n; i++) {
		cout << "\nCтудент " << i + 1 << ": ";
		if (stud[i].step == 2) cout << "повышенная стипендия" << endl;
		else if (stud[i].step == 1) cout << "обычная стипендия" << endl;
		else cout << "НЕТ СТИПЕНДИИ!!!!!!!!!!!!!!!!!!!!!!!!!"<< endl;
	}
}
