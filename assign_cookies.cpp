/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int childCounter = 0;
        int cookieCounter = 0;
        int totalContentChildren = 0;

        while(childCounter < g.size() && cookieCounter < s.size()){
            if(s[cookieCounter] >= g[childCounter]){
                totalContentChildren++;
                cookieCounter++;
                childCounter++;
            }
            else{
                cookieCounter++;
            }
        }

        return totalContentChildren;
    }
};

int main(){

    Solution s;
    vector<int> children, cookies;
    
    children = {1, 2, 3,4};
    cookies  = {1, 2, 2, 4};
    
    cout << "\n Total Number of content children : " << s.findContentChildren(children, cookies);;

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/