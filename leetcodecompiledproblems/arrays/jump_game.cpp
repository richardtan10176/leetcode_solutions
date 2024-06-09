#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int iterator = 0;
        int jumpDist;
        while(iterator < nums.size()){
            jumpDist = std::max(jumpDist, nums[iterator]);
            if(jumpDist == 0 && iterator != nums.size()-1){
                return false;
            }
            iterator++;
            jumpDist--;
            
        }
        return true;
    }
};