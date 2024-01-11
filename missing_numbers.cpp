/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? Yes
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------
*/


#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
    public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> newVec;
        sort(nums.begin(), nums.end());
        for(int i = 1; i <= nums.size(); i++){
            if(!binary_search(nums.begin(), nums.end(), i)){
                newVec.push_back(i);
            }
        }

        return newVec;
    }
};

int main(){

    vector<int> nums = {1,1};
    Solution s;
    vector<int> newVec = s.findDisappearedNumbers(nums);

    cout << "\nMissing Numbers are\n";
    for(int x : newVec){
        cout << x << "\t";
    }

    return 0;
}

/*
--------------------------------------
End of code version 1
all test cases passed
--------------------------------------
*/



/*
--------------------------------------
Code Version : 2
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------



class Solution {
    public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> seen(nums.size() + 1);
        vector<int> ans;

        for(int x : nums){
            seen[x] = true;
        }

        for(int i = 1; i < nums.size() + 1; i++){
            if(!seen[i]){
                ans.push_back(i);
            }
        }

        return ans;
    }
};




--------------------------------------
End of code version 2
all test cases passed
--------------------------------------

*/