#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pos;
    vector<int>arr = {3,6,1,7,3,7,22,2,75};
    cout << "Enter the no of positions to be shifted ";
    cin >> pos;
    while (pos > 0){
        int temp = arr[arr.size()-1];
        for (int i=arr.size()-1; i>0; i--)
            arr[i] = arr[i-1];
        arr[0] = temp;
        pos--;
    }
    for (auto n : arr)
        cout << n << " ";
    return 0;
}