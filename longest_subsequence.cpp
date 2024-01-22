/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
--------------------------------------
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int prev = 1, count = 1;

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] < nums[i + 1]){
                count++;
                prev = max(count, prev);
            }
            else
                count = 1;
        }

        return max(prev, count);
    }
};


int main(){

    vector<int> nums = {2,2,2,2,2};
    Solution s;

    int max = s.findLengthOfLCIS(nums);
    cout << "Max : " << max;

    return 0;
}


/*
--------------------------------------
End of code version 1
all test cases passed
--------------------------------------
*/