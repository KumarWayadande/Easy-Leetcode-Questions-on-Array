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
using namespace std;

class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        while(left <= right){
            sum += nums[left];
            left++;
        }

        return sum;
    }
};
int main(){

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    NumArray n(vec);

    cout << "Sum: " << n.sumRange(2, 6);

    return 0;
}


/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/