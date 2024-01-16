/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Upgraded Logic : Yes
Test Cases : All test passed
--------------------------------------
*/

#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        unordered_set<int> uniqueCandies;
        int candy = (candyType.size() / 2);

        for(int x : candyType){
            uniqueCandies.insert(x);
            if(min((int)uniqueCandies.size(), candy) == candy)
                break;
        }

        int types = uniqueCandies.size();
        

        return min(candy, types);
    }  
};

int main()
{

    vector<int> vec = {6, 6, 6, 6};
    Solution s;

    cout << "Candies to eat : " << s.distributeCandies(vec);

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/




/*

Login Number 2
Author Name : unknown


class Solution {
 public:
  int distributeCandies(vector<int>& candies) {
    bitset<200001> bitset;

    for (int candy : candies)
      bitset.set(candy + 100000);

    return min(candies.size() / 2, bitset.count());
  }
};
*/