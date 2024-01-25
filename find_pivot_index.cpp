/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : passed
--------------------------------------
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, left = 0, right = 0;
        for(int x : nums)
            sum += x;

        for(int i = 0; i < nums.size(); i++){
            right = sum - left - nums[i];
            if(right == left)
                return i;
            left += nums[i];
        }

        return -1;
    }
};

int main(){

    vector<int> nums = {2, 1, -1};
    Solution s;

    int n = s.pivotIndex(nums);

    cout << "\n Value returned is : " << n;

    return 0;
}



/*
--------------------------------------
End of code version 1
all test cases passed
--------------------------------------
*/