#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> result;

        for (int x = 0; x < nums.size() - 2; x++) {
            if (x > 0 && nums[x] == nums[x - 1])
                continue;
            
            int p1 = x + 1; //left pointer
            int p2 = nums.size() - 1; //right pointer
            
            while (p1 < p2) {
                int sum = nums[x] + nums[p1] + nums[p2];
                if (sum == 0) {
                    result.push_back({nums[x], nums[p1], nums[p2]});
                    while (p1 < p2 && nums[p1] == nums[p1 + 1])
                        p1++;
                    while (p1 < p2 && nums[p2] == nums[p2 - 1])
                        p2--;
                    p1++;
                    p2--;
                } else if (sum < 0) {
                    p1++;
                } else {
                    p2--;
                }
            }
        }
        return result;
    }
};
