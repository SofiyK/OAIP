#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
    setlocale(0, "");
    double xn, xk, eps, dx, x, s, f;
    int i, n;
    cout << "\nВведите xn= ";
    cin >> xn;
    cout << "\nВведите xk= ";
    cin >> xk;
    cout << "\nВведите шаг dx= ";
    cin >> dx;
    cout << "\nВведите точность eps= ";
    cin >> eps;
    cout << "\n         x     S(x)    atan(x)         n\n";
    n = 0;
    for (x = xn; x <= xk; x += dx)
    {
        s = -M_PI / 2 - 1. / x;
        for (f = -1. / x, i = 3; fabs(f) > eps; i += 2)
        {
            f = f / (- x * x) / i * (i - 2);
            s += f;
            n++;
        }
        cout << "\n"
            << setprecision(4) << setw(10) << x
            << setprecision(4) << setw(10) << s
            << setprecision(4) << setw(10) << atan(x)
            << setw(10) << n;
    }
    cout << "\n";
}
