#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    bool checkInclusion(std::string s1, std::string s2) {
        std::unordered_map<char,int> freqMap;
        for(int x = 0; x < s1.size(); x++){
            freqMap[s1[x]]++;
        }
        
        std::unordered_map<char,int> window;
        int left = 0, right = 0;
        
        while (right < s2.size()) {
            char charRight = s2[right];
            window[charRight]++;
            while (window[charRight] > freqMap[charRight]) {
                char charLeft = s2[left];
                window[charLeft]--;
                left++;
            }
            if (right - left + 1 == s1.size()) {
                return true;
            }
            right++;
        }
        return false;
    }
};
