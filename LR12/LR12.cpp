#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int l1, l2, n;
    cout << "\nВведите число долларов: ";
    cin >> n;
    l1 = n % 10;
    l2 = n % 100;
    //cout <<  << endl;
    switch (l2) {
    case 11: case 12: case 13: case 14: 
        cout << n << " долларов" << endl; break;
    default: 
        switch (l1) {
        case 1: cout << n << " доллар" << endl; break;
        case 2: case 3: case 4: cout << n << " доллара" << endl; break;
        default: cout << n << " долларов" << endl;
        }
    }
}
