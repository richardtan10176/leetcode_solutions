#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::unordered_map<int,int> freqMap;
        int k = 0;
        int ptr = 0;
        for(int x = 0; x < nums.size(); x++){
            freqMap[nums[x]]++;
            if(freqMap[nums[x]] <= 2){
                nums[ptr] = nums[x];
                k++;
                ptr++;
            }
        }
        return k;
        
        
    }
};