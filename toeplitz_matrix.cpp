// To be solved

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        if(row == 1)
            return true;

        int number = matrix[0][0];
        for (int i = 0; i < row - 1; i++)
        {
            cout << "\nNumber : " << number <<endl;
            for (int j = i; j < row; j++)
            {
                // cout << "a[" << j << "][" << (j - i) << "]";
                cout << "\nNumber being Compared : " << matrix[j][j - i];
                cout << "\nNumber to    Compared : " << number;
                if (matrix[j][j - i] != number)
                    return false;
            }
            number = matrix[i+1][0];
            cout << endl;
        }

        for (int i = 0; i < (col - 2); i++)
        {
            int number = matrix[0][i + 1];
            int k = 0;
            for (int j = i+1; j < col-1; j++)
            {
                cout << "\nNumber being Compared : " << matrix[k][j];
                cout << "\nNumber to    Compared : " << number;
                if(matrix[k][j] != number)
                    return false;
                k++;
            }
            cout << endl;
        }

        return true;
    }
};

int main()
{
    // vector<vector<int>> nums = {
    //     {1, 2, 3, 4},
    //     {5, 1, 2, 3},
    //     {9, 5, 2, 1},
    //     {9, 5, 2, 1}
    // };

    vector<vector<int>> nums = {
        {11,74,0,93},{40,11,74,7}
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