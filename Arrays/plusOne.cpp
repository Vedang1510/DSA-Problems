#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    vector<int> findSolution(vector<int>digits) {
        int last_digit = digits.size()-1;
        for (int i=last_digit; i>=0; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }
            else{ 
                digits[i]++;
                return digits;
            }
        } 
        digits.insert(digits.begin(),1);
        return digits;
    }
};
int main()
{
    Solution sol = Solution();
    vector<int> ques = {9,4,9,99,99,7,9,99,9,9};
    vector<int> ans = sol.findSolution(ques);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}