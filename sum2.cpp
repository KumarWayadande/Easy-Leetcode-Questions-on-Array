#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        
        for(int outerIter = 0; outerIter < nums.size(); outerIter++){
            for(int innerIter = outerIter+1; innerIter < nums.size(); innerIter++){
                if(nums[outerIter] + nums[innerIter] == target){
                    return {outerIter, innerIter};
                }
            }
        }
        return {};
    
};


int main(){
    Solution s;
    vector<int> num;
    int size;

    cout << "Enter size:";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter number:";
        int element;
        cin >> element;
        num.push_back(element);
    }

    vector<int> v = s.twoSum(num, 9);
    if(v.size() != 0){
        cout << "Output : [" << v.at(0) << ", " << v.at(1) << "]";
    }

    return 0;
}