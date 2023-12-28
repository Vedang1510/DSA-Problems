#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    int SRSum(vector<int> &nums, int target){   
        int right,left;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] > nums[i]){
                right = i-1;
                left = i;
                break;
            }
        } 
        while(left != right){
            int sum = nums[left] + nums[right];
            if(sum == target)
                return 1;
            else if (sum > target)
                right = (right + nums.size() - 1)%nums.size();
            else 
                left = (left + 1)%nums.size();
        }
        return 0;
    }

};
int main()
{
    Solution sol = Solution();
    vector<int> a = {5,7,8,-6,-4,-3};
    int ans = sol.SRSum(a,-7);
    cout << ans;
    return 0;
}