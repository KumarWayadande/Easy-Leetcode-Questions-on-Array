/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
--------------------------------------
*/
#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum = 0, lines = 1, index = 0;

        for(char s1 : s){
            index = s1 - 'a';
            if((sum + widths[index]) > 100){
                sum = widths[index];
                lines++;
            }
            else
                sum += widths[index];
        }

        return vector<int>({lines, sum});
    }
};

int main()
{
    Solution s;
    vector<int> widths = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    string str = "abcdefghijklmnopqrstuvwxyz";
    vector<int> newVec = s.numberOfLines(widths, str);
    cout << "\n Lines : " << newVec[0];
    cout << "\n Last row : " << newVec[1];
    return 0;
}


/*
--------------------------------------
End of code version 1
all test cases passed
--------------------------------------
*/