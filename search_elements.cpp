#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr {{14, 35, 57, 78},{61, 86, 8, 85},{22, 93, 37, 43}};
    int x;
    cout << "Checking the Element : ";
    cin >> x;
    int n = arr.size(); // As we have 3 rows
    int m = arr[0].size(); // As we have 4 columns;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == x)
            {
                cout << "It is Present" << endl;
                cout << "Position at which That element is Present: " << i << "," << j << endl;
            }
        }
    }
    return 0;
}