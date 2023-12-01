/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? yes
--------------------------------------
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
    
        if (nums.size() == 1)
        {
            return nums[0];
        }
        else
        {
            sort(nums.begin(), nums.end());
            int singleNumber = 0, i = 0;
            for (i = 0; i < nums.size(); i += 2)
            {
                if (nums[i] != nums[i + 1])
                {
                    singleNumber = nums[i];
                    break;
                }
            }

            if (i == nums.size())
                return nums[nums.size() - 1];
            else
                return singleNumber;
        }
    }
};

int main(){

    vector<int> nums{1, 2, 2, 4, 4, 5, 5};
    Solution s;
    cout << "\nSingle Number : " << s.singleNumber(nums);

    return 0;
}

/*
--------------------------------------
End of code of version number : 1 (it does not pass all the test cases)
--------------------------------------
*/


/*

--------------------------------------
Code Version : 2
Author : Kumar Wayadande
Upgraded Version ? No
--------------------------------------

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
         if (nums.size() == 1)
        return nums[0];
    else
    {
        int ans = nums[0] ^ nums[1];
        for (int i = 2; i < nums.size(); i++)
            ans = ans ^ nums[i];
        return ans;
        
    }
    }
};

-------------------------------------
End of code version 2
-------------------------------------
*/


