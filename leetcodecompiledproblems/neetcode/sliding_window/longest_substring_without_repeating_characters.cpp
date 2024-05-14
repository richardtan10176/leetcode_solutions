#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_map<char, int> freqMap;
        int max = 0;
        int count = 0;
        int start = 0; 
        
        for (int x = 0; x < s.size(); x++) {
            freqMap[s[x]]++;
            
            if (freqMap[s[x]] > 1) { 
                while (freqMap[s[x]] > 1) { 
                    freqMap[s[start]]--;
                    start++;
                }
                count = x - start + 1;
            } else {
                count++;
                if (count > max) {
                    max = count;
                }
            }
        }
        return max;
    }
};