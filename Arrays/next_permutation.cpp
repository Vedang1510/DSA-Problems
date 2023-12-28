#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;

class Solution{

    public:
    void nextPermutation(vector<int>nums) { 
        int flag = -1;
        for(int i=nums.size()-1; i>=0; i--){  
            for(int j = i-1; j>=0; j--){  
                if((nums[j] < nums[i]) && nums[j] != 0){   
                    swap(nums[i], nums[j]);
                    reverse(nums.begin()+(j+1), nums.end());
                    flag = 0;
                    break;
                }
            }
            if(flag == 0)
                break;
        }
        if (flag == -1)
            reverse(nums.begin(), nums.end());
        for (auto n: nums)
            cout << n << " ";
    }

};
int main()
{
    Solution sol = Solution();
    sol.nextPermutation({2,3,1});
    return 0;
}