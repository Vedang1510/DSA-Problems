/*
Given a string s, find the length of the longest 
substring
 without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {   
        unordered_map<char,int> mapp;
        int left=0,right=0;
        mapp.insert({'k',1});
        while (left<s.size())
        {
            if(s[right] == s[right+1])
                left = right+1;
            auto found = mapp.find(s[right]);
            if((found != mapp.end()) && (left<=found<=right)){ // value found 
                mapp[s[right]]=right;
                left++;
            }
            left++;
        }
    }
};
    int main()
    {
        Solution sol = Solution();
        string ques = "pwwkew";
        int ans = sol.lengthOfLongestSubstring(ques);
        cout << ans;
        return 0;
    }
