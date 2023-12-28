// reverse using recursion
#include<bits/stdc++.h>
using namespace std;

class reverseArray
{
    public:
    vector<int> ans;
    int func(int arr[], int i){ 
        if (i > 3)
            return i;
        func(arr,i+1);
        ans.push_back(arr[i]);
    }
    void printfunc(){
        for (auto n: ans)
            cout << n << " ";
    }
};
int main()
{
    int arr[4] = {2,5,3,6};
    reverseArray obj = reverseArray();
    obj.func(arr,0);
    obj.printfunc();
    return 0;
}