#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] < nums[high]) {
                high = mid;
            } else if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else { 
                high--;
            }
        }
        
        return nums[low];
    }
};
