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
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int n = letters.size();
        if(letters[n - 1] == target)
            return letters[0];
        else{
            for(char x : letters){
                if(x > target)
                    return x;
            }
        }

        return letters[0];
    }
};

int main(){

    vector<char> nums = {'a', 'f', 'c', 'g'};
    char target = 'k';
    Solution s;
    char newtarget = s.nextGreatestLetter(nums, target);
    cout << newtarget;
    return 0;
}


/*
--------------------------------------
End of code version 1
test cases  passed
--------------------------------------
*/