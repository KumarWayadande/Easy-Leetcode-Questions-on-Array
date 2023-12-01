#include <vector>
#include<iterator>
#include <map>
#include <iostream>
using namespace std;

void display(vector<int> & nums){
    map<int, int> map1;

    for(int x : nums){
        map1[x] ++;
    }

    map<int, int>::iterator it;
    it = map1.begin();

    // while (it != map1.end())
    // {   
    //     cout << "\nKey : " << it->first << "\t Value : " << it->second;
    //     it++;   
    // }


    int largestValue = 0;
    int majorityNumber = 0;
    while(it != map1.end()){
        if(largestValue < it->second){
            largestValue = it->second;
            majorityNumber = it->first;
        }
        it++;
    }
    return majorityNumber;

    // cout << endl << "Majority Number : " << majorityNumber;
    // cout << endl << "Largest Value   : " << largestValue;


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

    display(vec);

    // cout << "Majority Number : " << (new Solution())->majorityElement(vec);
    // display(vec);

    return 0;
}