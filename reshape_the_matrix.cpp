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
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
            int row = mat.size();
            int col = mat[0].size();
            

            if((row * col) != (r * c)){
                return mat;
            }
            else {
                    vector<vector<int>> reshapedMatrix(r);
                    for(int i = 0; i < r; i++){
                        reshapedMatrix[i] = vector<int>(c);
                    }

                    int rowCount = 0;
                    int k = 0, m = 0;

                    for(int i = 0; i < row; i++){
                        for(int j = 0; j < col; j++){
                            reshapedMatrix[k][m] = mat[i][j];
                            m++;
                            if(m == c){
                                m = 0;
                                k++;
                            }
                        }
                    }

                    return reshapedMatrix;
        }
    }
};

int main(){

    vector<vector<int>> mat = {
        {1, 2},
        {4, 5}
    };
    int r = 2, c = 4;

    Solution s;
    
    vector<vector<int>> reshapedMatrix = s.matrixReshape(mat, r, c);

    cout << "\n Reshaped Matrix \n";
    for(vector<int> row : reshapedMatrix){
        for(int x : row){
            cout << x << "\t";
        }
        cout << endl;
    }

    return 0;
}



/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/



/*
Login Number : 1
Worked in leetcode : No
Worked in vs code : yes

int row = mat.size();
        int col = mat[0].size();
        

        if((row == r && col == c) && (row * r) != (col * c)){
            cout << "Hello";
            return mat;
        }
        else {
                vector<int> dataContainer;
                vector<vector<int>> reshapedMatrix(r);
                for(int i = 0; i < r; i++){
                    reshapedMatrix[i] = vector<int>(c);
                }

                for(vector<int> row : mat){
                    for(int x : row){
                        dataContainer.push_back(x);
                    }
                }

                int k = 0;

                for(int i = 0; i < r; i++){
                    for(int j = 0; j < c; j++){
                        reshapedMatrix[i][j] = dataContainer[k];
                        k++;
                    }
                }

                return reshapedMatrix;
        }

*/

/*
Logic Number - 2
Author = unnamed
worked : yes everywhere

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if (m*n!=r*c)
            return mat;
        vector<vector<int>> res(r,vector<int>(c));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int row = (i*n+j)/c;
                int col = (i*n+j)%c;
                res[row][col] = mat[i][j];
            }
        }
        return res;
    }
};

*/