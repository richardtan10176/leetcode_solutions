#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        int p1 = 0;
        int p2 = s.size()-1;
        while(p2 >= p1){
            if(s[p2] != s[p1]){
                return false;
            }
            p2--;
            p1++;
        }
        return true;
    }
};