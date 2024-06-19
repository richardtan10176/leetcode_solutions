#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.empty()) return 0;
        
        int ptr = 0;
        int start = 0;

        for (int x = 0; x < haystack.size(); x++) {
            if (haystack[x] == needle[ptr]) {
                if (ptr == 0) {
                    start = x;
                }
                ptr++;
                if (ptr == needle.size()) {
                    return start;
                }
            } else {
                if (ptr > 0) {
                    x = start;
                }
                ptr = 0;
            }
        }
        return -1;
    }
};