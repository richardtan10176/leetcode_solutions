#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int maxSoFar = INT_MIN;
        int maxEndingHere = 0;


        for(int x = 0; x < nums.size(); x++){
            maxEndingHere = maxEndingHere + nums[x];
            if(maxSoFar < maxEndingHere){
                maxSoFar = maxEndingHere;
            }
            if(maxEndingHere < 0){
                maxEndingHere = 0;
            }
        }
        return maxSoFar;

        

    }
};