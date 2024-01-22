/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : passed
--------------------------------------
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int totalSum = 0;
        vector<int> scores;

        for(int i = 0; i < operations.size(); i++){
            string it = operations[i];
            if(it == "+"){
                scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
            }
            else if(it == "C"){
                scores.pop_back();
            }
            else if(it == "D"){
                scores.push_back(scores[scores.size() - 1] * 2);
            }
            else {
                scores.push_back(stoi(operations[i]));
            }
        }

        for(int x : scores){
            totalSum += x;
        }

        return totalSum;

    }
};

int main(){

    Solution s;
    vector<string> str = {"5","2","C","D","+"};
    // vector<string> str = {"1","C"};
    int sum = s.calPoints(str);

    cout << "\n Sum : " << sum;

    return 0;
}

/*
--------------------------------------
End of code version 1
test cases  passed
--------------------------------------
*/