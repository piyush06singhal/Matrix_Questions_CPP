#include <bits/stdc++.h>
using namespace std;
void spiralPrint(int m, int n, vector<vector<int>> &a)
{
    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    while (top <= bottom && left <= right)
    {
        // Print top row
        for (int i = left; i <= right; ++i)
        {
            cout << a[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; ++i)
        {
            cout << a[i][right] << " ";
        }
        right--;

        // Print bottom row (if exists)
        if (top <= bottom)
        {
            for (int i = right; i >= left; --i)
            {
                cout << a[bottom][i] << " ";
            }
            bottom--;
        }

        // Print left column (if exists)
        if (left <= right)
        {
            for (int i = bottom; i >= top; --i)
            {
                cout << a[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    spiralPrint(matrix.size(), matrix[0].size(), matrix);
    return 0;
}
