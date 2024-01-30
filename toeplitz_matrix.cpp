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

class Solution
{
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size(), k = 0;
 
        if(row == 1 || col == 1)
            return true;

        for(int i = 0; i < (row - 1); i++){
            int j = i;
            k = 0;
            int number = matrix[j][k];
            while(j < row && k < col){
                if(matrix[j++][k++] != number)
                    return false;
            }
        }

       for(int i = 1; i <= (col - 1); i++){
            int j = i;
            k = 0;
            int number = matrix[k][j];
            while(k < row && j < col){
                if(matrix[k++][j++] != number)
                    return false;
            }
       }
        return true;
    }
};

int main()
{
    vector<vector<int>> nums = {
        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {9, 5, 1, 2},
        {9, 9, 5, 1}
    };
    Solution s;

    if (s.isToeplitzMatrix(nums))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}



/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/