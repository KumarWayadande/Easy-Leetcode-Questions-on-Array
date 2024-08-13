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
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(n, 0);

        int front = 0;
        int rear = n - 1;

        for (auto x : nums)
        {
            if (x % 2 == 0)
                result[front++] = x;
            if (x % 2 != 0)
                result[rear--] = x;
        }

        return result;
    }
};

int main()
{
    vector<int> nums = {10, 2, 133, 1, 5, 3, 6, 1, 2, 2, 3};

    Solution s = Solution();
    vector<int> result = s.sortArrayByParity(nums);

    for (auto x : result)
    {
        cout << x << "|";
    }

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/