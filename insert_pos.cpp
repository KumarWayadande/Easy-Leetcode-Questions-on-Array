// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n = nums.size() - 1;
//         int med = 0, low = 0, high = n;

//         while (low <= high)
//         {
//             med = (low + high) / 2;

//             if (nums[med] == target)
//             {
//                 return med;
//             }
//             else if (nums[med] > target)
//             {
//                 high = med - 1;
//             }
//             else if (nums[med] < target)
//             {
//                 low = med + 1;
//             }
//         }

//         return low;
//     }
// };