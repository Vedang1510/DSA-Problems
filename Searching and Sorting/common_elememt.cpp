// for sorted arrays 
// if array is not sorted, use sort() function to sort the array

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    vector<int> findCommonTwo(vector<int> &temp1, vector<int> &temp2){
        vector<int> tempArr;
        tempArr.erase(tempArr.begin(), tempArr.end());
        int i=0, j=0;
        while (i<temp1.size() && j<temp2.size())
        {
            if (temp1[i] < temp2[j])
                i++;
            else if (temp1[i] > temp2[j])
                j++;
            else {
                tempArr.push_back(temp1[i]);
                i++;
                j++;
            }
        }
        return tempArr;
    }
    vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
    {
        // Write your code here
        vector<int> ans = findCommonTwo(a,b);
        vector<int> ans1 = findCommonTwo(ans,c);
        return ans1;
    }

};
int main()
{
    Solution sol = Solution();
    vector<int> a= {4,6,8} ;
    vector<int> b= {6}; 
    vector<int> c= {2,2,6};  
    vector<int> ans = sol.findCommonElements(a,b,c);
    if (ans.size() == 0)
        cout << "";
    else {
        for (auto i : ans)
            cout << i << " ";
    }
    return 0;
}