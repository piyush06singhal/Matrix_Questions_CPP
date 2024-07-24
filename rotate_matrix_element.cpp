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

    // operations
    for (int i = 0; i < R; i++)
    {
        for (int j = i; j < C; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0, k = R - 1; j < k; j++, k--)
        {
            swap(arr[j][i], arr[k][i]);
        }
    }

    // printing the output
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
