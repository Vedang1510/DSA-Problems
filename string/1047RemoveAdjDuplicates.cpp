#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {  
        string ans = "";
        for(int i=0; i<s.length(); i++){
            if (ans.length() != 0 && ans.back() == s[i])
                ans.pop_back();
            else 
                ans.push_back(s[i]);
        }
        return ans;
    }
};
int main()
{
    Solution sol = Solution();
    string ques = "axxayz";
    string ans = sol.removeDuplicates(ques);
    cout << ans;
    return 0;
}

/* using stack

int i=0;
        stack<char> stk;        
        string ans = "";
        while(s[i]){           
            if(stk.empty())     
                stk.push(s[i]);   
            else {
                if(stk.top() == s[i])
                   stk.pop();
                else
                    stk.push(s[i]);     
            }
            i++;
        }
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
*/