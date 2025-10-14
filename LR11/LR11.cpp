#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a,n,num;
    cout << "\nВведите число: ";
    cin >> a;
    n = a % 10;
    switch (n)
    { case 0: num = 0; break;
    case 1: case 9: num = 1; break;
    case 2: case 8: num = 4; break;
    case 3: case 7: num = 9; break;
    case 4: case 6: num = 6; break;
    default: num = 5;
    }
    cout << "\nПоследняя цифра квадрата числа " << a << " это " << num << endl;
}