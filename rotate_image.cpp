/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int row = matrix.size();

        // Transpose
        for(int i = 0; i < row; i++){
            for(int j = i; j < row; j++){
                int temp =matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // Reverse the mmatrixtrix row
        for(int i = 0; i < row; i++){
            for(int j = 0; j < (row / 2); j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][row - 1 - j];
                matrix[i][row - 1 - j] = temp;
            }
        }
    }
};

int main(){
    Solution s;
}


/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/