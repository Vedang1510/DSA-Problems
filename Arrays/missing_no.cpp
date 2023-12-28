#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;

class Solution{

    public:
    int missingNumber(vector<int>nums) {
        int n=nums.size();
        int expectedsum=(n*(n+1))/2;
        int total=0;
        for(int i=0;i<n;i++){
            total+= nums[i];
            
        }
        return expectedsum-total;
    }

};
int main()
{
    Solution sol = Solution();
    cout << sol.missingNumber({0,1});
    return 0;
}

/*
sort(nums.begin(), nums.end()); // 0 1 3 
        int next = nums[0];
        for(int i=1; i<=nums.size()-1; i++){  // 1
            next ++;
            if(next == nums[i])
                continue;
            else    
                break;
        }
        int last = nums.size()-1;
        if(nums[last] == next)
            cout << next+1 ;
        else 
            cout << next;
*/