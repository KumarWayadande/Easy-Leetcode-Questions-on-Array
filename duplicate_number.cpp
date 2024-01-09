/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : All test passed
--------------------------------------
*/

#include <map>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool findDuplicate(vector<int> vec)
    {
        map<int, int> map1;
        vector<int>::iterator vecIt;

        for (vecIt = vec.begin(); vecIt != vec.end(); ++vecIt)
        {
            ++map1[*vecIt];
            if (map1[*vecIt] > 1)
                return true;
        }
        return false;
    }
};

int main()
{

    vector<int> vec = {1, 2, 3, 4, 5, 6, 1, 1};
    Solution s;
    if (s.findDuplicate(vec))
    {
        cout << "Duplicate numbers found" << endl;
    }
    else
    {
        cout << "\nDuplicate numbers not found\n";
    }

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/
