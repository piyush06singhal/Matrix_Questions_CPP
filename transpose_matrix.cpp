#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr {{2 , 3 , 4}, {45 , 54 , 67}, {23 , 78 , 90}};
    int x = arr.size();
    for(int i = 0; i < x; i++)
    {
        for(int j = i + 1; j < x; j++)
        {
            swap(arr[i][j] , arr[j][i]);
        }
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}