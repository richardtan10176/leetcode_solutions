#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    int trap(std::vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        
        std::vector<int> left(n);
        std::vector<int> right(n);
        
        left[0] = height[0];
        for (int i = 1; i < n; i++) {
            left[i] = std::max(left[i - 1], height[i]);
        }
        
        right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right[i] = std::max(right[i + 1], height[i]);
        }
        
        int trappedWater = 0;
        for (int i = 0; i < n; i++) {
            trappedWater += std::min(left[i], right[i]) - height[i];
        }
        
        return trappedWater;
    }
};