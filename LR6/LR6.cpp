//Вариант 9

#include <iostream>
#define _USE_MATH_DEFINES
#include<math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, z1, z2;
    cout << "\nВведите угол a: ";
    cin >> a;
    cout << "\nВведите угол b: ";
    cin >> b;
    a = a / 180 * M_PI;
    b = b / 180 * M_PI;
    z1 = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b), 2);
    z2 = -4 * pow(sin((a - b) / 2.), 2) * cos(a + b);
    cout << "\nz1 = " << z1 << "\nz2 = " << z2 << endl;
}