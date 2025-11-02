#include <iostream>
#include<fstream>
#include<ctime>

using namespace std;
int main()
{
    setlocale(0, "");
    srand(time(0));
    int n,i,c, count = 0;
    cout << "\nВведите количество чисел: ";
    cin >> n;
    ofstream file("LR24.txt");
    cout << "Файл LR24.txt: ";
    for (i = 0;i < n;i++) {
        c = rand() % 21 - 10;
        if (c < 0) count++;
        file << c << " ";
        cout << c << " ";
    }
    cout << endl;

    file.close();
    cout << "\nКоличество отрицательных элементов: " << count << endl;

}
