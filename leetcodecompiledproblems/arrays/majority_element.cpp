#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int,int> freqMap;
        for(int x = 0; x < nums.size(); x++){
            freqMap[nums[x]]++;
        }
        int maxFreq = 0;
        int answer = 0;
        for (auto& it: freqMap) {
            if(it.second > maxFreq){
                answer = it.first;
                maxFreq = it.second;
            }
        }
        return answer;
    }
};