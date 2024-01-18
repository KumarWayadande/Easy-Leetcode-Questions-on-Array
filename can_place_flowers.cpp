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
#include<vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

            int size = flowerbed.size();
            
            if(n == 0)
                return true;
            
            if(size == 1 && flowerbed[0] == 0)
                return (((n - 1) == 0) ? true : false);
            
            if(size == 1 && flowerbed[0] == 1)
                return false;

            if(flowerbed[0] == 0 && flowerbed[1] == 0)
            {
                flowerbed[0] = 1;
                --n;
            }

            if(flowerbed[size - 1] == 0 && flowerbed[size - 2] == 0 && n > 0){
                flowerbed[size - 1] = 1;
                --n;
            }

            for(int i = 1; i < (size - 1) && n > 0; i++){
                if((flowerbed[i] + flowerbed[i - 1] + flowerbed[i + 1]) == 0)
                {
                    flowerbed[i] = 1;
                    --n;
                }
            }
        return n == 0;
    }
};

int main(){
    vector<int> flowerBed = {1,0,0,0,1,0,1,0,0,0,1};
    int n = 3;

    Solution s;

    bool maxFlowerPlotted = s.canPlaceFlowers(flowerBed, n);

    cout << "\n Flowers plotted : " << ((maxFlowerPlotted) ? "true" : "false");

    return 0;
}


/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/