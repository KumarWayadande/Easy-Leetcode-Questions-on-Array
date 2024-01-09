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

class Solution{

    public:
        int missingNumber(vector<int>& nums) {
                int sum = (nums.size() * (nums.size() + 1)) / 2;
                int actualSum = 0;

                for(int x : nums){
                    actualSum += x;
                }

                return (sum - actualSum);
        } 

};



int main(){

    vector<int> vec = {0,1};
    Solution s;
    cout << "Returned Value : " << s.missingNumber(vec);

    return 0;
}


/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/