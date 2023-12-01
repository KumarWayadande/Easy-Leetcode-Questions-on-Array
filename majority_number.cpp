#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int occurence1, occurence2;
        occurence1 = occurence2 = nums.size();
        int firstNo = nums[0];
        int secondNo = 0;

        for (int x : nums)
        {
            if (x == firstNo)
                occurence1--;
            else
            {
                secondNo = x;
                occurence2--;
            }
        }

        if ((occurence1 == occurence2) || (occurence1 < occurence2))
            return firstNo;
        else
            return secondNo;
    }
};

void display(vector<int> &vec)
{
    int n = vec.size();
    cout << endl
         << endl
         << "Numbers\n";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << "\t";
    }
}

int main()
{

    int n;
    cout << "Enter Total Number of element:";
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number " << (i + 1) << ":";
        cin >> vec[i];
    }

    cout << "Majority Number : " << (new Solution())->majorityElement(vec);
    display(vec);

    return 0;
}



/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? yes
--------------------------------------
*/
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> map1;

        for (int x : nums)
            map1[x]++;

        map<int, int>::iterator it = map1.begin();

        int largestValue = 0;
        int majorityNumber = 0;
        while (it != map1.end())
        {
            if (largestValue < it->second)
            {
                largestValue = it->second;
                majorityNumber = it->first;
            }
            it++;
        }
        return majorityNumber;
    }
};

/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? yes
--------------------------------------
*/