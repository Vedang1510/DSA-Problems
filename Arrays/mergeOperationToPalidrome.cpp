#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    int Merge_to_palidrome(vector<int> &nums){
        int left = 0;
        int right = nums.size()-1;
        int count = 0;
        while (left < right)
        {
            if(nums[left] == nums[right]){
                left++;
                right--;
                continue;
            }
            else if(nums[left] < nums[right]){
                nums[left] = nums[left] + nums[right];
                right--;
            }
            else 
                left++;
            count++;
        }
        return count;
    }

};
int main()
{
    Solution sol = Solution();
    vector<int> a = {-1,0};
    int ans = sol.Merge_to_palidrome(a);
    cout << ans;
    return 0;
}