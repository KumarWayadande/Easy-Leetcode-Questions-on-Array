#include <map>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> map1;

        for (int x : nums)
        {
            map1[x]++;
        }

        map<int, int>::iterator it;
        it = map1.begin();

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