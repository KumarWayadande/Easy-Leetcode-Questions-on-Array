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
#include <cmath>
using namespace std;

class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int sum = 0;

        for (int i = 0; i < (timeSeries.size() - 1); i++)
        {
            int min1 = fmin((timeSeries[i + 1] - timeSeries[i]), duration);
            sum += min1;
        }
        sum += duration;

        return sum;
    }
};

int main()
{
    vector<int> timeSeries = {1, 4, 5};
    int duration = 2;
    Solution s;
    int sum = s.findPoisonedDuration(timeSeries, duration);

    cout << "Duration : " << sum;

    return 0;
}

/*
--------------------------------------
End of code version 1
All test cases passed
--------------------------------------
*/

/*

Code author : Kumar Wayadande
Partially Solved (90% solved)

class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int sum = 0, currentSum = 0, j = 0;

        if (duration != 0)
        {
            for (int i = timeSeries[0]; i <= timeSeries[timeSeries.size() - 1]; i++)
            {
                if (i == timeSeries[j])
                {
                    j++;
                    currentSum = 1;
                }
                else
                    currentSum++;

                if (currentSum <= duration)
                {
                    sum+=1;
                }
                // cout << "I : " << i << endl;
            }

            sum += (duration - 1);
        }

        return sum;
    }
};


*/

/*
Code author = Unnamed
Solves all the cases


class Solution {
public:
    int findPoisonedDuration(vector<int>& time, int duration) {
        int previous = -1;
        int answer = 0;

        for (int i : time){

            answer += duration;
            //checking if the poisoned times are overlapping
            if (previous >= i){
                //removing the overlapped time from the answer
                answer = answer -abs(previous - i) -1;
            }
            // keeping track of the previous time
            previous = i + duration -1;
        }
        return answer;

    }
};
*/
