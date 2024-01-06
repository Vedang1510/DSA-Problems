/*
A phrase is a palindrome if, after converting all uppercase letters into 
lowercase letters and removing all non-alphanumeric characters, it reads the same 
forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(left <= right){
            if(!isalnum(s[left]))
                left ++;
            else if (!isalnum(s[right]))
                right --;
            else if (s[left] != s[right])
                return false;
            else {
                left ++;
                right --;
            }
        }
        return true;
    }
};
int main()
{
    Solution sol = Solution();
    string ques = "sadf";
    bool ans = sol.isPalindrome(ques);
    cout << ans;
    return 0;
}