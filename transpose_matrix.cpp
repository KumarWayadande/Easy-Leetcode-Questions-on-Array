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
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> newVec(cols, vector<int>(rows, 0));
        for(int i = 0; i < cols; i++){
            for(int j = 0; j < rows; j++){
                newVec[i][j] = matrix[j][i];
            }
        }


        return newVec;
    }
};

void display(vector<vector<int>> matrix){
    for(auto row : matrix){
        for(int col : row)
            cout << col << " ";
        cout << endl;
    }
}

int main(){

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    Solution s;

    cout << "\n Before Transpose\n";
    display(matrix);
    matrix = s.transpose(matrix);
    cout << "\n After Transpose\n";
    display(matrix);
    

    return 0;
}


/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/