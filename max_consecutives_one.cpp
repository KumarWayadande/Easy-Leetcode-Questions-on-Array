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
#include <set>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int largest = 0, currentLargest = 0;

        for (auto x : nums)
        {
            if (x == 1)
            {
                currentLargest++;
            }
            else
            {
                largest = max(currentLargest, largest);
                currentLargest = 0;
            }
        }
        return max(largest, currentLargest);
    }
};
// class Solution {
//     public:
//         int findMaxConsecutiveOnes(vector<int>& nums) {
//                 set<int> set1;
//                 int large = 0;
//                 for(int x : nums){
//                     if(x == 1)
//                         large++;
//                     else{
//                         set1.insert(set1.end(), large);
//                         large = 0;
//                     }
//                 }

//                 set1.insert(set1.end(), large);

//                 return *--set1.end();
//         }
// };

int main()
{

    vector<int> num = {0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0};
    Solution s;
    cout << "\n Max consecutive ones are : " << s.findMaxConsecutiveOnes(num);

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/