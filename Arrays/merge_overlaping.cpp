/*

Given an array of intervals where intervals[i] = [starti, endi], 
merge all overlapping intervals, and return an array of the non-overlapping 
intervals that cover all the intervals in the input.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){  
        vector<int> temp;  
        sort(intervals.begin(), intervals.end());
        temp.push_back(intervals[0][0]);
        temp.push_back(intervals[0][1]);
        vector<vector<int>> ans;
        for(int k=1; k<intervals.size(); k++){
            if(temp[1] >= intervals[k][0]){
                temp[1] = max(temp[1], intervals[k][1]);
            }
            
            else {
                ans.push_back(temp);
                temp.erase(temp.begin(),temp.end());
                temp.push_back(intervals[k][0]);
                temp.push_back(intervals[k][1]);
            }
        }
        ans.push_back(temp);
        return ans;
    }

};
int main()
{
    Solution sol = Solution();
    vector<vector<int>> a = {{1,4},{0,4},{1,5},{2,4},{6,7}};
    vector<vector<int>> ans = sol.merge(a);
    for (int k=0; k<ans.size(); k++)
    {
        cout << ans[k][0] << " " << ans[k][1] << endl;
    }
    
    return 0;
}

/*
Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
*/