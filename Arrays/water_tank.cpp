/*
You are given an integer array height of length n. 
There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

ex : Input: height = [1,8,6,2,5,4,8,3,7]
    Output: 49
    Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
                 In this case, the max area of water (blue section) the container can contain is 49.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    int findSolution(vector<int> height) {
        int left = 0;
        int right = height.size()-1;
        int area=0, temp=0, ans=0;
        while(left < right){
            temp = min(height[left], height[right]);
            area = temp * (right-left);
            if(area > ans)
                ans = area;
            if(height[left] < height[right])
                left++;
            else 
                right--;
        }
        return ans;
    }   

};
int main()
{
    Solution sol = Solution();
    vector<int> ques ={1,8,6,2,5,4,8,3,7};
    int ans = sol.findSolution(ques);
    cout << ans;
    return 0;
}



/*

// O(n^2)
int ans = 0,temp=0;
for (int i=0; i<height.size(); i++){
    for (int j=i+1; j<height.size(); j++){
        if(height[i] > height[j]){
            temp = height[j]*(j-i); // correct
            
        }
        else {
            temp = height[i]*(j-i); // correct

        }
        if(temp > ans){
            ans = temp;
        }
    }
}
return ans;

*/