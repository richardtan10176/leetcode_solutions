#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    int characterReplacement(std::string s, int k) {
        int maxLength = 0;
        int maxCount = 0; 
        int start = 0;
        int charCount[26] = {0}; 

        for (int x = 0; x < s.size(); x++) {
            maxCount = std::max(maxCount, ++charCount[s[x] - 'A']);

            if (x - start + 1 - maxCount > k) {
                charCount[s[start] - 'A']--;
                start++;
            }

            maxLength = std::max(maxLength, x - start + 1);
        }

        return maxLength;
    }
};