#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main()
{
    setlocale(0, "");
    double m, n;
    cout << "\nМасса первого пакета: ";
    cin >> m;
    cout << "\nМасса второго пакета: ";
    cin >> n;
    if (m > n) {
        cout << "\nПервый пакет тяжелее" << endl;
    } else if (m < n) {
        cout << "\nВторой пакет тяжелее" << endl;
    } else cout << "\nМасса пакетов одинакова" << endl;
}