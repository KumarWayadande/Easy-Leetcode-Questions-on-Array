/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------
*/
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIndex = 0, maxNumber = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > maxNumber){
                maxNumber = nums[i];
                maxIndex = i;
            }
        }

        sort(nums.begin(), nums.end());

        if(maxNumber < (nums[nums.size() - 2] * 2)){
            return -1;
        }

        return maxIndex;
    }
};

int main(){

    vector<int> nums = {1, 2, 3, 4};

    Solution s;

    cout << endl << "Ans : " << s.dominantIndex(nums);

    return 0;
}



/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/