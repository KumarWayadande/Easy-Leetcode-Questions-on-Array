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
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        return max((nums[size - 1] * nums[size - 2] * nums[size - 3]), (nums[0] * nums[1] * nums[size - 1]));
    }
};

int main()
{
    vector<int> timeSeries = {-1, -2, -3};
    Solution s;
    int max = s.maximumProduct(timeSeries);
    cout << "\n Maximum Product : " << max;
    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/



/*
Logic Number : 2

        int i, j, k;
        int maxIndex1 = 0, maxIndex2 = 0, maxIndex3 = 0, minIndex1 = 0, minIndex2 = 0;
        int max1, max2, max3;
        int min1, min2;

        max1 = max2 = max3 = min1 = min2 = nums[0];
        for(int i = 0; i < nums.size(); i++)
        {
            max1 = (nums[i] > max1) ? nums[i] : max1;
            maxIndex1 = (nums[i] > max1) ? i : maxIndex1;
        }

        for(int i = 0; i < nums.size(); i++){
            if(i == maxIndex1)
                continue;
            
            max2 = (nums[i] > max2) ? nums[i] : max2;
            maxIndex2 = (nums[i] > max2) ? i : maxIndex2;
        }

        for(int i = 0; i < nums.size(); i++){
            if(i == maxIndex1 || i == maxIndex2)
                continue;
            
            max3 = (nums[i] > max3) ? nums[i] : max3;
            maxIndex3 = (nums[i] > max3) ? i : maxIndex3;
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min1){
                min1 = nums[i];
                minIndex1 = i;
            }    
        }

        for(int i = 0; i < nums.size(); i++){
            if(i == minIndex1) continue;
            if(nums[i] < min2){
                min2 = nums[i];
            }
            
        }

        return max((min1 * min2 * max3), (max1 * max2 * max3));

*/