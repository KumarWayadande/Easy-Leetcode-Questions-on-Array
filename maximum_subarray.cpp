/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases :
Worked in vscode ?  Yes
Alogrithm : Kadane's algorithm
--------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution{
    public:
        int maxSubArray(vector<int> &nums){
            int sum = 0;
            int maxNo = nums[0];

            for(auto x : nums){
                sum += x;
                maxNo = max(sum, maxNo);
                sum = sum < 0 ? 0 : sum;
            }
            return maxNo;
        }
};

// class Solution
// {
// public:
//     int maxSubArray(vector<int> &nums)
//     {
//         int psum = 0, ptsum = 0, sum = 0;
//         vector<int> blocks;
        
//         for(auto num : nums){
//             cout << num << endl;
//         }

// int newSum = 0;
//         try
//         {
//             for (int i = 0, j = 0; i < nums.size(); i++)
//             {
//                 sum = psum + nums[i];
//                 cout << "sum : " << sum << endl;
//                 cout << "psum : " << psum << endl;
//                 cout << "ptsum : " << ptsum << endl;
//                 if (psum < sum && ptsum < sum)
//                 {
//                     blocks[j++] = i;
//                     newSum += sum;
//                 }else{
//                     j = 0;
//                     newSum = 0;
//                 }
//                 psum = sum;
//                 ptsum = psum;
//             }

            
//             // cout << "\n Blocks vector \n";
//             // for (int i = 0; i < blocks.size(); i++)
//             // {
//             //     cout << blocks[i] << endl;
//             //     newSum += blocks[i];
//             // }

//             return newSum;
//         }
//         catch (const std::exception &e)
//         {
//            cout << e.what();
//         }
//     }
// };

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution s = Solution();
    cout << "Sum : " + s.maxSubArray(nums);

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/