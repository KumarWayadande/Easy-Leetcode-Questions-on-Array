/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? Yes
Test Cases : test cases not passed
Worked in vscode ?  Yes
--------------------------------------
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> str;
        unsigned int n = nums.size();
        int smallest = nums[0];
        int largest = nums[n - 1];
        int start, last; 
        start = last = nums[0];
        int j = 0;

        for(int i = smallest ; i <= largest+1; i++){
            if(nums[j] == i && j != n){
                last = nums[j];
                j++;
            }else{
                if(start == last){
                    str.insert(str.end(), to_string(start));
                    // cout << to_string(start)+"" << "\t";
                }   
                else{
                    if(start != last){
                        str.insert(str.end(), to_string(start) + "->" + to_string(last));
                        // cout << to_string(start) + "->" + to_string(last) << "\t";
                    }
                }
                start = last = nums[j];
            }
            
        }
        return str;
    }
};

int main(){
    vector<int> vec = {-1};

    vector<string> str;
    Solution s;
    str = s.summaryRanges(vec);

    cout << "\n Ranges are \n";
    for(string x : str)
    {
        cout << x << " | ";
    }
    return 0;
}



/*
--------------------------------------
End of code version 1
Some test cases failed
--------------------------------------
*/



/*
--------------------------------------
Code Version : 2
Author : Kumar Wayadande
Upgraded Version ? yes
Test Cases : all passed
--------------------------------------


#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    
    vector<string> summaryRanges(vector<int>& arr) {
        int n = arr.size(); // extracting size of the array
        vector<string> ans; // declaring answer array to store our answer
        
        string temp = ""; // temproray string that stores all possible answer
        
        for(int i = 0; i < n; i++) // start traversing from the array
        {
            int j = i; // declare anthor pointer that will move
            
            // run that pointer until our range is not break
            while(j + 1 < n && arr[j + 1] == arr[j] + 1)
            {
                j++;
            }
            
            // if j > i, that means we got our range more than one element
            if(j > i)
            {
                temp += to_string(arr[i]); // first store starting point
                temp += "->"; // then store arrow, as question wants it
                temp += to_string(arr[j]); // and lastly store the end point
            }
            else // we got only one element as range
            {
                temp += to_string(arr[i]); // then store that element in temp
            }
            
            ans.push_back(temp); // push one possible answer string to our answer
            temp = ""; // again reintiliaze temp for new possible answers
            i = j; // and move i to j for a fresh start
        }
        
        return ans; // and at last finally return the answer array
    }

};



--------------------------------------
End of code version 2
All test cases passed
--------------------------------------
*/