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

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
       int minRow = m;
       int minCol = n;

       for(auto& x : ops){
           minRow = min(minRow, x[0]);
           minCol = min(minCol, x[1]);
       }

       return minRow * minCol;
    }
};

int main()
{
    int row = 3, col = 3;
    vector<vector<int>> ops = {
        {2,2},
        {3,3},
        {2,3},
        {3,2},
        {3,1}
    };
    Solution s;

    cout << "\n Maximum Cells Manipulated : " << s.maxCount(row, col, ops);

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/

/*

Logic Number : 1

class Solution
{
public:
    int maxCount(int m, int n, vector<vector<int>> &ops)
    {

        if (ops.size() == 0)
            return (m * n);
        
        int max = 0;
        int prevRow, prevCol;
        prevCol = prevRow = -1;

        for (int i = 0; i < ops.size(); i++)
        {
            int row = ops[i][0];
            int col = ops[i][1];
            max = row * col;
            if(row == 1 && col == 1)
                return max;
            else{
                if(prevRow != -1){
                    int a = min(prevRow, prevCol);
                    int b = min(row, col);
                    max = a * b;
                }
                else{
                    max = row * col;
                }
            }
            prevCol = col;
            prevRow = row;
            if(col == row)
                max -= col;
        }
        return max;
    }
};


*/