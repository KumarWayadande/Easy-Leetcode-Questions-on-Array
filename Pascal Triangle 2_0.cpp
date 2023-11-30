#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution
{
public:
    int fact(int n)
    {
        return (n == 0) || (n == 1) ? 1 : n * fact(n - 1);
    }

    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;

        for (int i = 0; i < numRows; i++)
        {
            vector<int> row;
            for (int r = 0; r <= i; r++)
            {
                int colValue = fact(i) / (fact(r) * (fact(i - r)));
                row.push_back(colValue);
            }
            ans.push_back(row);
        }

        return ans;
    }
};

int main()
{
    vector<vector<int>> vec;
    Solution s;

    vec = s.generate(14);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}