#include <iostream>
#include<ctime>

using namespace std;

void create(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10;
        cout << a[i] << " ";
    }
    cout << endl;
}
void min(int a[], int n) {
    int min = a[0];
    int index = 0;
    for (int i = 0; i < n;i++) {
        if (min > a[i]) {
            min = a[i];
            index = i;
        }
    }
    cout << min << " с индексом " << index << endl;
    cout << "[=======================================================]" << endl;
}


int main()
{
    setlocale(0, "");
    srand(time(0));
    int nx, ny, x[20], y[20];
    cout << "\nВведите количество элементов массива X: ";
    cin >> nx;

    cout << "\nМассив Х: " << endl;
    create(x, nx);

    cout << "\nМинимальный элемент массива Х: ";
    min(x, nx);


    cout << "\nВведите количество элементов массива Y: ";
    cin >> ny;
    
    cout << "\nМассив Y: " << endl;
    create(y, ny);
   
    cout << "\nМинимальный элемент массива Y: ";
    min(y, ny);

}
