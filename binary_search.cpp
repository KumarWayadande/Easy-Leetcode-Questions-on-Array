/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : passed
--------------------------------------
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int mid = 0, low = 0, high, n = nums.size();
        high = n;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};

int main()
{

    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    Solution s;

    if (s.search(nums, target) != -1)
        cout << "Found \n";
    else
        cout << "Not Found \n";

    return 0;
}


/*
--------------------------------------
End of code version 1
test cases  passed
--------------------------------------
*/