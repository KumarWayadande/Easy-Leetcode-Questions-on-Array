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
#include<map>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> map1;
        vector<string> vec;
        for(int i = 0; i < list1.size(); i++)
            map1[list1[i]] = i;
        

        map<string, int> newMap;
        for(int i = 0; i < list2.size(); i++){
            if(map1.count(list2[i])){
                newMap[list2[i]] = map1[list2[i]] + i;
            }
        }

        int minNumber = 99999;
        for(auto it : newMap){
                minNumber = (it.second < minNumber) ? it.second : minNumber;
        }

        for(auto it: newMap)    {
            if(it.second == minNumber)
                vec.push_back(it.first);
        }

        return vec;
    }
};

int main(){

    vector<string> str1 = {"happy","sad","good"};
    vector<string> str2 = {"sad","happy","good"};

    Solution s;

    vector<string> newStr = s.findRestaurant(str1, str2);
    cout << "\n common strings \n";
    for(string x : newStr){
        cout << x << endl;
    }

    return 0;
}



/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/