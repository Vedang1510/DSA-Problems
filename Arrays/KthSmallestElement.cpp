/*
Given an array arr[] and an integer K where K is smaller than size of array, 
the task is to find the Kth smallest element in the given array. It is given 
that all array elements are distinct.

Note :-  l and r denotes the starting and ending index of the array.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+r+1    );
        int pos = k-1;
        return arr[pos];
    }
};
int main()
{
    Solution sol = Solution();
    int arr[] = {7,10,4,20,15};
    int ans = sol.kthSmallest(arr, 0, 4, 4);
    cout << ans;
    return 0;
}

/*
Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
*/
