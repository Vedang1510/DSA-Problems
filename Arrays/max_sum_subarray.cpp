#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int>nums) {
        int max_sum = nums[0];
        int curnt_sum = 0;
        for (int i=0; i<nums.size(); i++){
            curnt_sum += nums[i];
            max_sum = max(curnt_sum, max_sum);
            if(curnt_sum < 0)
                curnt_sum = 0;
        }
        return max_sum;
    }

};
int main()
{
    Solution sol = Solution();
    cout << sol.maxSubArray({1,2,3,4});
    return 0;
}