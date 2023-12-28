#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    vector<int> vec{3,2,8,0,0,0,0,0,2,3,0,8};
    int count=0;
    vector<int> :: iterator itr;
    for (itr = vec.begin(); itr != vec.end();){
        if(*itr == 0)
            itr = vec.erase(itr);
        else {
            count ++;
            itr++;
        }
    }
    cout << count << endl;
    for (auto i: vec)
        cout << i << " ";
    return 0;
}