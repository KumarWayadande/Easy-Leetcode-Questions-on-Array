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

class Solution{

    public:
        vector<int> findErrorNums(vector<int>& nums) {
            int sumOfNoOfNums = 0, sumOfNoOfSet1 = 0;
            int sumOfNo = nums.size() * (nums.size() + 1) / 2;

            set<int> set1(nums.begin(), nums.end());
            
            for(int x : nums) sumOfNoOfNums += x;
            for(int x : set1) sumOfNoOfSet1 += x;

            return {(sumOfNoOfNums - sumOfNoOfSet1), (sumOfNo - sumOfNoOfSet1)};
        }   
};

int main(){

    vector<int> nums = {1, 1};
    Solution s;
    vector<int> newVector = s.findErrorNums(nums);

    cout << "\n Lost Number found : \n";
    for(int x : newVector){
        cout << x << "\t";
    }

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/



/*
--------------------------------------
Code Version : 2
Author : Unnamed
Upgraded Version ? No
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2),mp(nums.size(),0);
        for(int i=0;i<nums.size();i++){
           mp[nums[i]-1]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[i]==0)ans[1]=i+1;
            if(mp[i]==2)ans[0]=i+1;
        }return ans;
    }
};


--------------------------------------
End of code version 2
All test cases passed
--------------------------------------
*/