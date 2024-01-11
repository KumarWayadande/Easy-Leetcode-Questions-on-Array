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
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;


class Solution{
    public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> map1, map2;
        vector<int> newVec;

        for(int x : nums1)
            map1[x]++;
        
        for(int x : nums2)
            map2[x]++;

        unordered_map<int, int> :: iterator it;
            for(it = map2.begin(); it != map2.end(); it++){
                if(map1.count(it->first)){
                    if(map1[it->first] == it->second)    newVec.insert(newVec.end(), it->second, it->first);
                    else if(map1[it->first] > it->second){
                        newVec.insert(newVec.end(), it->second, it->first);
                    }
                    else if(map1[it->first] < it->second){
                        newVec.insert(newVec.end(), map1[it->first], it->first);
                    }
                }
            }
            return newVec;
    }

};


void display(vector<int> & nums){
    for(int x : nums){
        cout << x << "\t";
    }
}

int main(){
    vector<int> num1, num2, num3;
    num1 = {1, 2, 2, 1};
    num2 = {2};

    Solution s;

    num3 = s.intersect(num1, num2);
    cout << "\n Vector Num1\n";
    display(num1);
    cout << "\n Vector Num2\n";
    display(num2);
    cout << "\n Vector Num3\n";
    display(num3);
}
/*
--------------------------------------
End of code version 1
all test cases passed
--------------------------------------
*/


/*

#### Logic Number 2
used to push an element into vector according to its occurence
it is converted to a single line of code as follows

newVec.insert(newVec.end(), abs(map1[it -> first] - it -> second), it->first);

Full length code give below

                    if(map1[it->first] > it -> second){
                        int pos = map1[it->first] - it->second;
                        newVec.insert(newVec.end(), pos, it->first);
                    }
                    else if(map1[it->first] < it -> second){
                        int pos = it->second - map1[it->first];
                        newVec.insert(newVec.end(), pos, it->first);
                    }

*/





/*

### Logic Number 1

{
 unordered_set<int> num2Set(nums2.begin(), nums2.end());
            unordered_map<int, int> map1;
            vector<int> newVec;
            for(int x : nums1){
                map1[x]++;
            }

            for(int x : num2Set){
                if(map1.count(x)){
                    newVec.insert(newVec.end(), map1[x], x);
                }
            }

            return newVec;
}

*/