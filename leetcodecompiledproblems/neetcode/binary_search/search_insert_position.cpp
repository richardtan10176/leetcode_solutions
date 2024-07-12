#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        if (target < nums[0]) {
            return 0;
        }
        if (target > nums[nums.size() - 1]) {
            return nums.size();
        }
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low <= high) {
            mid = low + ((high - low) / 2);
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    
};
