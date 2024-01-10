/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? Yes
Test Cases : some test cases failed
Worked in vscode ?  Yes
--------------------------------------
*/


#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < (n - 1); i++){
            if(nums[i] == 0){
                int j = i + 1;
                while(nums[j] == 0 && j < n) j++;
                if(j == n)
                    return;
                else{
                    nums[i] = nums[j];
                    nums[j] = 0;
                }
            }
        }
    }
};

int main(){

    vector<int> nums = {0,0};
    Solution s;
    s.moveZeroes(nums);

    cout << "\nNums after moving zeros\n";
    for(int x : nums){
        cout << x << "\t";
    }

    return 0;
}

/*
--------------------------------------
End of code version 1
some test cases failed
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
    void moveZeroes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int i = 0, j = 0;
        int n = nums.size();
        while(i < n and j < n)
        {
            if(nums[i] != 0) i++;
            if(nums[j] == 0) j++;

            if((i < n and j < n) and (i < j))
                swap(nums[i],nums[j]);
            
            j++;
        }
    }
};

--------------------------------------
End of code version 2
All test cases passed
--------------------------------------
*/