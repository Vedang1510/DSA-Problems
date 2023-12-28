#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<iterator>
#include<algorithm>
#include<numeric>
using namespace std;

class Solution{

    public:
    int subarraysDivByK(vector<int>& nums, int k) {   // -1 2 9
        unordered_map<int, int> freq;  // {1,2}
        int sum = 0, rem = 0;
        int ans = 0;  // 2
        for (int i = 0; i < nums.size(); i++)  // 2
        {
            sum += nums[i];   // 10
            rem = sum % k;  // 0
            if(rem == 0)
                ans++;
            if(rem < 0)
                rem = rem + k;   
            if(freq[rem] != 0)
                ans += freq[rem];  
            freq[rem]++;
        }
        return ans;
    }

};
int main()
{
    Solution sol = Solution();
    vector<int> a = {-1,2,9};
    int ans = sol.subarraysDivByK(a,2);
    cout << ans;
    return 0;
}

/*
vector<int> temp;   
        int count = 0;  
        int last = nums.size()-1;  
        for(int i=0; i<=last; i++){   
            int left = i;  
            int right = i+1;  
            if(nums[left] % k == 0)  
                count++;  
            temp.push_back(nums[left]);   
              
            while (right <= last)   
            {
                temp.push_back(nums[right]);  
                int sum = accumulate(temp.begin(), temp.end(),0); 
                if(sum % k == 0)  
                    count++;  
                right++; 
            }
            temp.erase(temp.begin(), temp.end());
        }
        return count;
*/