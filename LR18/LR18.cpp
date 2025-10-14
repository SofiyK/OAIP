#include <iostream>
#include<ctime>
#include<iomanip>
#define USE_MATH_DEFINES
#include<math.h>


using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(0));
    int i, j, n;
    double max, lenght,x1,x2,y1,y2;
    cout << "\nВведите количество точек: ";
    cin >> n;
    n *= 2;
    double* points = new double[2*n];
    //создание массива с координатами точек
    for (i = 0;i < n;i++) 
       {
           points[i] = rand() % 100 / 10. - 5;
       }
    //вывод точек и их координат
    cout << "\n   №    x    y";
    cout << "\n-----------------\n";
    j = 1;
    for (i = 0;i < n;i += 2)
        {
            cout << setw(4) << j;
            cout << setw(6) << points[i];
            cout << setw(6) << points[i + 1] << endl;
            j++;
        }
    //поиск наибольшего расстояния между точками
    max = 0;
    for (i = 0;i < n;i += 2)
        for (j = 2;j < n;j += 2) {
            lenght = sqrt(pow(points[i] - points[j], 2) + 
                pow(points[i + 1] - points[j + 1], 2));
            if (max < lenght) {
                max = lenght;
                x1 = points[i];
                x2 = points[j];
                y1 = points[i + 1];
                y2 = points[j + 1];
            }

        }
    cout << "\nМаксимальное расстояние между точками равно " << max<< endl;
    cout << "\nКоординаты точки: (" << x1 << ";" << y1 << ")" << endl;
    cout << "\nКоординаты точки: (" << x2 << ";" << y2 << ")" << endl;
    delete[] points;
}
