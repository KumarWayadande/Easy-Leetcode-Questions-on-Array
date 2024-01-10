
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
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> newVec;
        unordered_set<int> set1;
        unordered_map<int, int> map1;

        for (int x : nums1)
            map1[x]++;

        for(int x : nums2)
        {
            if (map1[x] > 0)
                set1.insert(x);
        }

        newVec.assign(set1.begin(), set1.end());

        return newVec;
    }
};

void display(vector<int> nums)
{
    for (int x : nums)
    {
        cout << x << "\t";
    }
}

int main()
{

    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    Solution s;
    vector<int> newNums = s.intersection(nums1, nums2);

    cout << "\n Vector 1\n";
    display(nums1);
    cout << "\n Vector 2\n";
    display(nums2);
    cout << "\n Vector 3\n";
    display(newNums);

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/