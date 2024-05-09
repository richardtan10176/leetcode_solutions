#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_map<int,int> freqMap;
        int answer = 0;
        for(int x = 0; x < nums.size(); x++){
            freqMap[nums[x]]++;
        }
        int ovrBest = 0;
        for(int x = 0; x < nums.size(); x++){
            if(freqMap[nums[x]-1] > 0){
                int curBest = freqMap[nums[x]]; 
                curBest += freqMap[nums[x]-1];
                int counter = 2;
                while(true){
                    if(freqMap[nums[x]-counter] == 0){
                        break;
                    }
                    curBest += freqMap[nums[x]-counter];
                    counter++;
                }

                if(curBest > ovrBest){
                    ovrBest = curBest;
                }
            }
        }
        return ovrBest;
    }
};