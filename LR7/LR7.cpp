#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main()
{
    setlocale(0, "");
    double R, r, SR, Sr, S;
    cout << "\nВведите внешний радиус: ";
    cin >> R;
    cout << "\nВведите внутренний радиус: ";
    cin >> r;
    SR = M_PI * R * R;
    Sr = M_PI * r * r;
    S = SR - Sr;
    cout << "\nПлощадь кольца равна " << S << endl;
}
