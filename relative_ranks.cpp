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
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int, string> ranksMap;
        vector<string> ranksVector;  
        vector<int> scoreTemp = score;

        sort(score.begin(), score.end(), greater<int>());

        for(int i = 0; i < score.size(); i++){
            if(i == 0)
                ranksMap[score[i]] = "Gold Medal";
            else if(i == 1)
                ranksMap[score[i]] = "Silver Medal";
            else if(i == 2)
                ranksMap[score[i]] = "Bronze Medal";
            else
                ranksMap[score[i]] = to_string(i+1);
        }

        for(int i = 0; i < scoreTemp.size(); i++){
            ranksVector.push_back(ranksMap[scoreTemp[i]]);
        }

        return ranksVector;
        
    }
};

int main(){
    vector<int> nums = {10,3,8,9,4};
    Solution s;

    vector<string> vec = s.findRelativeRanks(nums);
    cout << "\n Ranks \n";
    for(auto s : vec){
        cout << s << "\t";
    }
    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/