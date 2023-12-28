#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
class Solution{
    public:
    
    int removeDuplicates(vector<int> nums){
         vector<int> ans {INT8_MIN};
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(ans[0] == INT8_MIN)
                ans[0] = nums[0];
            if (nums[i] == ans.back())
                continue;
            else 
                ans.push_back(nums[i]);
        }
        k = ans.size();
        for(int i=0; i<ans.size(); i++){
            nums[i] = ans[i];
        }
        for (int i=ans.size(); i<nums.size(); i++)
            nums[i] = int('_');
        cout << "No. of non duplicate : " << k << endl;
        for (auto n : nums) 
            cout << n << ", " ;
    }
};
int main(){
    Solution ss = Solution();
    cout << ss.removeDuplicates({-1,0,0,0,0,3,3});
    return 0;
}


// solution withour STL
// vector<int> ans {INT8_MIN};
        // int k=0;
        // for(int i=0; i<nums.size(); i++){
        //     if(ans[0] == INT8_MIN)
        //         ans[0] = nums[0];
        //     if (nums[i] == ans.back())
        //         continue;
        //     else 
        //         ans.push_back(nums[i]);
        // }
        // k = ans.size();
        // for(int i=0; i<ans.size(); i++){
        //     nums[i] = ans[i];
        // }
        // for (int i=ans.size(); i<nums.size(); i++)
        //     nums[i] = int('_');
        // cout << "No. of non duplicate : " << k << endl;
        // for (auto n : nums) 
        //     cout << n << ", " ;


// solution with set 
/* 
set<int> ans;
        for(int ele: nums){
            ans.insert(ele);
        }
        int i = 0;
        for(int ele: ans){
            nums[i++] = ele;
        }
        return ans.size();
*/