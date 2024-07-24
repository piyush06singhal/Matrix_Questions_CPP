#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
    // Inputing the array by the user
    int R, C;
    cout << "Inputing the Rows and colums: ";
    cin >> R >> C;
    int arr[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];
        }
    }

    // operations
    for (int i = 0; i < R + C - 1; i++)
    {
        for (int j = 0; j < R; j++)
        {
            for (int k = 0; k < C; k++)
            {
                if (j + k == i)
                {
                    if (i % 2 == 0)
                    {
                        cout << arr[k][j];
                    }
                    else
                    {
                        cout << arr[j][k];
                    }
                }
            }
        }
    }
    return 0;
}
