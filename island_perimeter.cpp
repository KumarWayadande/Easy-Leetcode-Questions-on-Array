/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? Yes
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
    int islandPerimeter(vector<vector<int>> &grid)
    {
            int row = grid.size();
            int col = grid[0].size();
            int ans = 0, allSides = 0;
            
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    allSides = 0;
                    if(grid[i][j] == 1){
                        // if((j - 1) >= 0 && grid[i][j - 1] == 1) allSides++;
                        ((j - 1) >= 0 && grid[i][j - 1] == 1 && allSides++);
                        // if((j + 1) < col && grid[i][j + 1] == 1) allSides++;
                        ((j + 1) < col && grid[i][j + 1] == 1 && allSides++);
                        ((i - 1) >= 0 && grid[i - 1][j] == 1 && allSides++);
                        ((i + 1) < row && grid[i + 1][j] == 1 && allSides++);
                        ans += (4 - allSides);
                        // cout << "\nSides of Grid[" << i << "][" << j << "] == " << (4 - allSides);
                    }
                    
                }
            }

            return ans;
    }
};

int main()
{

    vector<vector<int>> grid = {
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {1, 1, 0, 0}
    };

    Solution s;

    cout << "\n Perimeter : " << s.islandPerimeter(grid);

    return 0;
}


/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/


/*
--------------------------------------
Code Version : 2
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------

class Solution {
 public:
  int islandPerimeter(vector<vector<int>>& grid) {
    int islands = 0;
    int neighbors = 0;

    for (int i = 0; i < grid.size(); ++i)
      for (int j = 0; j < grid[0].size(); ++j)
        if (grid[i][j]) {
          ++islands;
          if (i - 1 >= 0 && grid[i - 1][j])
            ++neighbors;
          if (j - 1 >= 0 && grid[i][j - 1])
            ++neighbors;
        }

    return islands * 4 - neighbors * 2;
  }
};



--------------------------------------
End of code version 2
All test cases passed
--------------------------------------
*/