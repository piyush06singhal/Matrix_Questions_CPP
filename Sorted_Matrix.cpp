#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	vector<vector<int>>arr{{4, 5, 7},{1, 6, 8},{2, 9, 3}};
    int x = arr.size();
    vector<int> newArray;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            newArray.push_back(arr[i][j]);
        }
    }
    sort(newArray.begin(), newArray.end());
    int k = 0;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            arr[i][j] = newArray[k++];
        }
    }
    cout << "Sorted Matrix is: " << endl;
    for(auto it: arr)
    {
        for(auto vt : it)
        {
            cout << vt << " ";
        }
        cout << endl;
    }
    return 0;
}