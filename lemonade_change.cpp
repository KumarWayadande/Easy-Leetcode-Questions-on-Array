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
    bool lemonadeChange(vector<int>& bills) {
        int fiveDollars = 0, tenDollars = 0, twentyDollars = 0;

        for(int x : bills){
            if(x == 5)
                fiveDollars++;
            else if(x == 10){
                tenDollars++;
                if(fiveDollars > 0)
                    fiveDollars--;
                else
                    return false;
            }
            else if(x == 20){
                twentyDollars++;
                if(tenDollars == 0){
                    if(fiveDollars >= 3)
                        fiveDollars -= 3;
                    else
                        return false;
                }
                else if(fiveDollars > 0){
                        fiveDollars--;
                        tenDollars--;
                }
                    else
                        return false;
            }
        }

        return true;
    }
};

int main()
{

    vector<int> bills = {5,5,5,10,5,5,10,20,20,20};

    Solution s;

    cout << (s.lemonadeChange(bills) ? "Given all the changes" : "Cannot provide all the changes");

    return 0;
}


/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/