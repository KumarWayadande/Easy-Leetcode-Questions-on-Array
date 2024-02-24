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
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        vector<vector<int>> newImage(image.size(), vector<int>(image[0].size(), 0));
        for(int i = 0; i < image.size(); i++){
            for(int j = image[0].size() - 1, k = 0; j >= 0; j--, k++){
                newImage[i][k] = !image[i][j];
            }
        }

        return newImage;
    }
};

int main()
{

    vector<vector<int>> nums = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}};
    Solution s;

    nums = s.flipAndInvertImage(nums);
    for(auto x : nums){
        for(int item : x)
            cout << item << "\t";
        cout << "\n";
    }

    return 0;
}


/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/