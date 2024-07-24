#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int R, C;
    cout << "enter rows and colums: ";
    cin >> R >> C;
    int arr[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (R == 2 && C == 2)
    {
        int determinant = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
        cout << determinant << endl;
    }
    if (R == 3 && C == 3)
    {
        int x = arr[0][0] * ((arr[1][1] * arr[2][2]) - (arr[1][2] * arr[2][1]));
        int y = arr[0][1] * ((arr[1][0] * arr[2][2]) - (arr[1][2] * arr[2][0]));
        int z = arr[0][2] * ((arr[1][0] * arr[2][1]) - (arr[1][1] * arr[2][0]));
        int determinant = x - y + z;
        cout << determinant << endl;
    }
    return 0;
}