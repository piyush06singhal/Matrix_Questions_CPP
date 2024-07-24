#include <iostream>
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

    // operations for determing the maximum element from the particular row
    int max = 0;
    int result[R];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        result[i] = max;
        max = 0;
    }

    // Priting the output
    for (int i = 0; i < C; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}