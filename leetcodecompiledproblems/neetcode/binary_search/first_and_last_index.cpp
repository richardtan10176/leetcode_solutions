#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        if(nums.empty()){
            return {-1,-1};
        }
        
        int low = 0;
        int high = nums.size() - 1;
        int mid;

        while(low <= high){
            mid = low + ((high - low) / 2);
            if(nums[mid] == target){
                break;
            } else if(nums[mid] > target){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        if(low > high){
            return {-1, -1}; 
        }
        
        int p1 = mid;
        int p2 = mid;

        while(p1 >= 0 && nums[p1] == target){
            p1--;
        }
        
        while(p2 < nums.size() && nums[p2] == target){
            p2++;
        }

        return {p1 + 1, p2 - 1};
    }
};
