#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> ans;
        moveBack(ans, "", 0, 0, n);
        return ans;
    }

    void moveBack(std::vector<std::string>& ans, std::string cur, int open, int close, int max) {
        if (cur.length() == max * 2) {
            ans.push_back(cur);
            return;
        }
        if (open < max)
            moveBack(ans, cur + "(", open + 1, close, max);
        if (close < open)
            moveBack(ans, cur + ")", open, close + 1, max);
    }
};
