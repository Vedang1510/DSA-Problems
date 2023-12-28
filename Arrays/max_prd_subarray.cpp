/*
Given an integer array nums, find a 
subarray
that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
*/


#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    int maxProduct(vector<int>&nums) {  
        int max_prd = INT32_MIN;  
        int crnt_prd = 1;  
        for(int i=0; i<nums.size(); i++){  
            crnt_prd *= nums[i];  
            max_prd = max(max_prd, crnt_prd);
            if(crnt_prd == 0)
                crnt_prd = 1;
        }
        crnt_prd = 1;
        for(int i=nums.size()-1; i>=0; i--){  
            crnt_prd *= nums[i];  
            max_prd = max(max_prd, crnt_prd);
            if(crnt_prd == 0)
                crnt_prd = 1;
        }
        return max_prd;
    }
};
int main()
{
    Solution sol = Solution();
    vector<int>ques =  {1,2,-3,5,7};  
    int ans = sol.maxProduct(ques);
    cout << ans;
    return 0;
}