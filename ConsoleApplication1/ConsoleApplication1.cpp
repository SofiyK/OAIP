#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int i, j, r, zer, col, a[8];
    //зерно колос
    cout << "\ntest";
    for (a[0] = 1; a[0] <= 2; a[0]++)
        for (a[1] = 1; a[1] <= 9; a[1]++)
            for (a[2] = 1; a[2] <= 9; a[2]++)
                for (a[3] = 1; a[3] <= 9; a[3]++)
                    for (a[4] = 1; a[4] <= 9; a[4]++)
                        for (a[5] = 1; a[5] <= 9; a[5]++)
                            for (a[6] = 1; a[6] <= 9; a[6]++)
                                for (a[7] = 1; a[7] <= 9; a[7]++)
                                {
                                    zer = a[0] * 10000 + a[1] * 1000 + a[2] * 100 + a[3] * 10 + a[4];
                                    col = a[5] * 10000 + a[4] * 1000 + a[7] * 100 + a[4] * 10 + a[7];
                                    
                                    if (zer * 2 == col)
                                    {
                                        r = 0;
                                        for (i = 0;i < 8;i++)
                                            for (j = i + 1; j < 8;j++)
                                                if (a[i] == a[j]) r++;
                                        if (r == 0) cout << zer << " + "
                                            << zer << " = " << col << endl;
                                    }
                                }

}
