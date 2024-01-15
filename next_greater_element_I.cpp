/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? Yes
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

            int val = -1;

            map<int, int> map1;
            for(int i = 0; i < nums2.size(); i++){
                map1[nums2[i]] = i;
            }

            vector<int> newVec;

            for(int i = 0; i < nums1.size(); i++){
                int j = map1[nums1[i]];
                val = -1;
                while(j < nums2.size() - 1){
                    if(nums2[j + 1] > nums1[i]){
                        val = nums2[j + 1];
                        break;
                    }
                    j++;
                }
                newVec.push_back(val);
            }

            return newVec;
    }
};

int main(){

    vector<int> num1 = {4, 1, 2};
    vector<int> num2 = {1, 3, 4, 2};
    Solution s;

    vector<int> num3 = s.nextGreaterElement(num1, num2);
    cout << "Num3 \n";
    for(int x : num3){
        cout << x << "\t";
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
--------------------------------------
Code Version : 2
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
Worked in vscode ?  Yes
--------------------------------------


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            while(st.empty()!=true&&st.top()<nums2[i]){
                int temp=st.top();
                st.pop();
                mp[temp]=nums2[i];
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                nums1[i]=mp[nums1[i]];
            }
            else{
                nums1[i]=-1;
            }
        }
        return nums1;
    }
};



--------------------------------------
End of code version 2
All test cases passed
--------------------------------------
*/