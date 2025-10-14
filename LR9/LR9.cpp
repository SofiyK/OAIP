#include <iostream>

using namespace std;
int main()
{
    setlocale(0, "");
    double x, y;

    cout << "\nВведите координаты точки (x;y): " << endl;
    cin >> x >> y;

    if ((x * x + y * y <= 36 && y >= 0 && x >= 0) || (x >= 0 && y >= x - 6 && y <= 0)) {
        cout << "\nТочка попадает в заштрихованную область." << endl;
    }
    else {
        cout << "\nТочка не попадает в заштрихованную область." << endl;
    }
}
