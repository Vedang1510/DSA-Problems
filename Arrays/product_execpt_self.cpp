/*
Given an integer array nums, return an array answer such that answer[i] 
is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
*/

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;

class Solution{

    public:
    vector<int> productExceptSelf(vector<int>nums) { 

        int n = nums.size();
        vector<int> ans(n);
        vector<int> left(n),right(n);
        int last_element = nums.size() - 1;
        left[0] = nums[0];  
        right[last_element ] = nums[last_element ]; 
        for(int i=1; i<=last_element ; i++)
            left[i] = nums[i] * left[i-1];  

        for(int i=last_element -1; i>=0; i--)
            right[i] = nums[i] * right[i + 1];
        
        ans[0] = right[1];
        ans[last_element] = left[last_element - 1];
        for(int i=1; i<last_element ; i++)
            ans[i] = left[i-1] * right[i+1];  
        
        return ans;
    }

};
int main()
{
    Solution sol = Solution();
    vector<int> a = sol.productExceptSelf({-1,1,0,-3,3});
    for(int n: a)
        cout << n << " ";
    return 0;
}
/*
Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

/* ANSWER 3 :- O(n)  without using divison

    int n = nums.size();
    vector<int> ans(n);
    vector<int> left(n),right(n);
    int last_element = nums.size() - 1;
    left[0] = nums[0];  
    right[last_element ] = nums[last_element ]; 
    for(int i=1; i<=last_element ; i++)
        left[i] = nums[i] * left[i-1];  

    for(int i=last_element -1; i>=0; i--)
        right[i] = nums[i] * right[i + 1];
    
    ans[0] = right[1];
    ans[last_element] = left[last_element - 1];
    for(int i=1; i<last_element ; i++)
        ans[i] = left[i-1] * right[i+1];  
    
    return ans;
*/

/* ANSWER 2 :- O(n) using division

    vector<int> ans;
    int product = 1;
    int flag;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == 0){
            flag = 0;
            continue;
        }
        else
        product *= nums[i];
    }
    cout << product << endl;
    for(int i=0; i<nums.size(); i++){
        int temp;
        if(nums[i] == 0){
            ans.push_back(product);
        }
        else if(flag == 0)
            ans.push_back(0);
        else{
            temp = product/nums[i];
            ans.push_back(temp);
        }
        
    }
    return ans;
*/

/* ANSWER 1 :- bruthforce method O(n^2)

    vector<int> ans;
    int product;
    for(int i=0; i<nums.size(); i++){  // 0
        product = 1;
        for(int j=0; j<nums.size(); j++){  // 1
            if(i == j)  
                continue;
            else{
                product *= nums[j];  
            } 
        }
        ans.push_back(product);
    }
    return ans;
*/
