#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    setlocale(0, "");
    double a = 1, b = 8, h, x, s1 = 0, s2 = 0,s3 = 0, s, sim, pram;
    int i, n;
    cout << "\nВведите n: ";
    cin >> n;
    x = a;
    h = (b - a) / 2 / n;
    // по формуле Симпсона:
    for (i = 2;i <= 2 * n - 2;i += 2)
    {
        s1 += 1 / (sqrt(17 * x + 8));
        x += 2 * h;
    }
    s1 *= 2;
    x = a;
    for (i = 1; i <= 2 * n - 1; i += 2)
    {
        s2 += 1 / (sqrt(17 * x + 8));
        x += 2 * h;
    }
    s2 *= 4;
    s = s1 + s2 + a / (sqrt(17 * x + 8)) + b / (sqrt(17 * x + 8));
    sim = (b - a) * s / (6 * n);
    cout << "\nПо формуле Симпсона значение интеграла = " 
        << sim << endl;
    //по формуле прямоугольника
    x = a;
    for (i = 0; i <= n - 1;i++)
    {
        s3 += 1 / (sqrt(17 * x + 8)); 
        x += 2 * h;
    }
    pram = (b - a) * s3 / n ;
    cout << "\nПо формуле прямогульника значение интеграла = "
        << pram << endl;
}
