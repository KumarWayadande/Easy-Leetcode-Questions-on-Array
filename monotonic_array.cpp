/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------
*/


#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        bool monoInc, monoDec;
        monoInc = monoDec = true;

        int i = 0;
        while (i < nums.size() - 1)
        {

            if (monoInc)
            {
                if (nums[i] <= nums[i + 1])
                    monoInc = true;
                else
                    monoInc = false;
            }
            if (monoDec)
            {
                if (nums[i] >= nums[i + 1])
                    monoDec = true;
                else
                    monoDec = false;
            }
            if (!monoInc && !monoDec)
                break;
            i++;
        }

        return monoInc || monoDec;
    }
};

int main()
{
    vector<int> nums = {1, 2, 2, 3};

    Solution s = Solution();
    cout << s.isMonotonic(nums);
    return 0;
}


/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/