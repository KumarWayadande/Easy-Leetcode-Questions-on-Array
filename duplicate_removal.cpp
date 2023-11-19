#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int duplicateRemover(vector<int> &nums)
    {
        vector<int> temp, tempNum;
        bool flag = false;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                    continue;
                else
                {
                    if (nums.at(i) == nums.at(j))
                    {
                        if (j > i)
                            temp.push_back(j);
                    }
                }
            }
        }


        for (int i = 0; i < nums.size(); i++)
        {
            flag = false;
            for (int n : temp)
            {
                if (n == i)
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
                tempNum.push_back(nums[i]);
        }

        nums = tempNum;
        return nums.size();
    }
};

int main()
{
    vector<int> num{1, 2, 4, 100, 200, 100, 5};
    vector<int> expectedNum{1, 2, 4, 100, 200, 5};

    Solution s;
    int k = s.duplicateRemover(num);
    if(k == expectedNum.size())
    {
        cout << "\n#### Num ####\n";
        for(int n : num){
            cout << n << "  ";
        }

        cout << "\n#### Expected Num ####\n";
        for(int n : expectedNum){
            cout << n << "  ";
        }
    }

    return 0;
}
