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
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> positions;
        vector<int> ans;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == c)
                positions.push_back(i);
        }

        for(int i = 0; i < s.length(); i++){
            int minNo = INT32_MAX;
            for(int j = 0; j < positions.size(); j++){
                minNo = min(abs(i - positions[j]), minNo);
            }
            ans.push_back(minNo);
        }

        return ans;
    }
};

int main(){

    string s = "loveleetcode";
    char c = 'e';
    Solution sObj;

    vector<int> ans = sObj.shortestToChar(s, c);

    cout << "\n Answer \n";
    for(int x : ans)
        cout << x << "\t";

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/