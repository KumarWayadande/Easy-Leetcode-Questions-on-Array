/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : All test passed
--------------------------------------
*/


#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
            unordered_map<int, int> map1;

            for(int i = 0; i < nums.size(); i++){

                if(map1.count(nums[i])){
                    if(abs(map1[nums[i]] - i) <= k)
                        return true;
                }

                map1[nums[i]] = i;
            }

            return false;
    }
};

int main(){

    vector<int> vec = {1, 0, 1, 1};
    Solution s;

    if(s.containsNearbyDuplicate(vec, 1)){
        cout << "Number found";
    }
    else
        cout << "\nNumber not found";


    return 0;
}



/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/