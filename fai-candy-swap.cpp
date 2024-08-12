/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : All passed
Worked in vscode ?  Yes
--------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
    {

        int totalAlice = 0, totalBob = 0, avgCandies = 0;
        for (auto x : aliceSizes)
            totalAlice += x;
        for (auto x : bobSizes)
            totalBob += x;

        avgCandies = (totalAlice + totalBob) / 2;

        bool flag = false;

        int alice = 0;
        int bob = 0;
        for (auto x : aliceSizes)
        {
            int drop = x;
            int remainingBox = totalAlice - x;
            int requiredBox = avgCandies - remainingBox;
            alice = x;
            bob = requiredBox;
            for (auto y : bobSizes)
            {
                if (y == requiredBox)
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
                break;
        }

        return vector<int>{alice, bob};
    }
};

int main()
{
    vector<int> aliceSizes = {2};
    vector<int> bobSizes = {1, 3};
    // vector<int> aliceSizes = {1, 2};
    // vector<int> bobSizes = {2, 3};
    Solution s = Solution();
    vector<int> result = s.fairCandySwap(aliceSizes, bobSizes);

    cout << result[0] << ", " << result[1];

    return 0;
}



/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/