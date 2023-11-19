#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> plusOne(vector<int> & digits)
{
    int sum, rem = 0;

    for(int n : digits){
        sum = (sum * 10) + n; 
    }
    sum += 1;
    digits.clear();

    while(sum > 0){
        rem = sum % 10;
        sum /= 10;
        digits.push_back(rem);
    }

    reverse(digits.begin(), digits.end());
    
    return digits;

    
}

int main()
{

    vector<int> arr{1, 2, 3};

    
    cout << endl << "Old Array : ";
    for(int n : arr){
        cout << n << "  ";
    }
    
    
    arr = plusOne(arr);
    
    cout << endl << "New Array : ";
    for(int n : arr){
        cout << n << "  ";
    }

    return 0;
}