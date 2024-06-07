#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0;
        int ptr = 0;
        for(int x = 0; x < nums.size(); x++){
            if(nums[x] != val){
                nums[ptr] = nums[x];
                k++;
                ptr++;
            }
        }
        return k;
    }
};