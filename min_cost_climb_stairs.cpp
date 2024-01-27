#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a , b, n = cost.size();
        int startIndex = 0, sum = 0, i = 0;
        if(n == 2)
            return min(cost[0], cost[1]);
        
        a = cost[0] + cost[2];
        b = cost[1] + cost[2];


        if(a < b){
            startIndex = 0;
        }
        else if(b < a){
            startIndex = 1;
        }
        sum += cost[startIndex];
        i = startIndex;
        cout << "StartIndex : " << startIndex << endl;
        cout << "Sum        : " << sum << endl;
        while((i + 2) < n){
            cout << "\nLoop executes";
            int no = min(cost[i + 1], cost[i + 2]);
            sum += no;
            if(no == cost[i + 1])
                i++;
            else if(no == cost[i + 2])
                i += 2;
        }

        return sum;
    }
};

int main(){

    vector<int> nums = {10, 15, 20, 30};

    Solution s;

    cout << endl << "Ans : " << s.minCostClimbingStairs(nums);

    return 0;
}