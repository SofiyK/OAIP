#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, p, q, r, s;
    cout << "\nВведите размеры участка: ";
    cin >> a >> b;
    cout << "\nВведите размеры первого дома: ";
    cin >> p >> q;
    cout << "\nВведите размеры второго дома: ";
    cin >> r >> s;
    if (a * b >= p * q + r * s) {
        if ((p + r <= a && s <= b && q <= b) || (p + s <= a && q <= b && r <= b)
            || (p + r <= b && q <= a && s <= a) || (p + s <= b && q <= a && r <= a) ||
            (r + q <= b && s <= a && p <= a) || (r + q <= a && s <= b && p <= b)) {
            cout << "\nДома можно расположить на участке" << endl;
        }
        else cout << "\nДома нельзя расположить на участке" << endl;
    } 
    else cout << "\nДома нельзя расположить на участке" << endl;
}
