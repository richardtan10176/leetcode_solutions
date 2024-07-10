#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";
        
        std::string answer;
        int counter = 0;
        bool stop = false;

        while (!stop) {
            if (counter >= strs[0].size()) {
                stop = true;
                break;
            }
            
            char current_char = strs[0][counter];
            for (int x = 1; x < strs.size(); x++) {
                if (counter >= strs[x].size() || strs[x][counter] != current_char) {
                    stop = true;
                    break;
                }
            }

            if (!stop) {
                answer += current_char;
            }
            
            counter++;
        }

        return answer;
    }
};