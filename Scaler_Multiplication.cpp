#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Inputing the array by the user
    int k;
    cout << "Input the Number to be multiplied in the matrix: ";
    cin >> k;
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
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            arr[i][j] = arr[i][j] * k;
        }
    }

    // printing the output
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}