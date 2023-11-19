#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{

    // int low = 0;
    // int high = (nums.size()-1);
    // int med = 0;

    // if(nums[low] == target){
    //     return low;
    // }
    // else if(nums[high] == target){
    //     return high;
    // }
    // else {
    //     while((high - low) != 1){
    //         med = (high + low) / 2;
    //         // cout << "E";
    //         if(nums[med] == target){
    //             return med;
    //         }
    //         else if(nums[med] > target){
    //             high = med;
    //         }
    //         else if(nums[med] < target){
    //             low = med;
    //         }
    //     }
    // }

    // high = (nums.size() - 1);
    // if(target > nums[high]){
    //     return (high+1);
    // }
    // else{
    //     if(target < nums[0]){
    //         return 0;
    //     }
    //     else {
    //         return ((med == (high-1)) ? ((++med)) : med);
    //     }
    // }

    int low = 0;
    int high = nums.size();
    int mid;
    if (nums[0] == target)
    {
        return 0;
    }
    else
    {
        if (nums[high - 1] == target)
        {
            return (high - 1);
        }
        else
        {
            if (target > nums[high - 1])
            {
                return high;
            }
            while (low <= high)
            {
                mid = (low + high) / 2;
                if (nums[mid] == target)
                {
                    return mid;
                }

                if (target < nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
        }
    }

    return low;
}

int main()
{

    vector<int> arr{1, 3, 5, 70};

    cout << "\n Vector : ";
    for (int n : arr)
    {
        cout << n << "  ";
    }
    cout << endl;
    int n = searchInsert(arr, 6);
    cout << "Index : " << n;

    return 0;
}