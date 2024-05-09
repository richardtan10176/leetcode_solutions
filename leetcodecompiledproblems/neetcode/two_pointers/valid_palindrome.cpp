#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string parsed;
        for(int x = 0; x < s.size(); x++){
            if(isalnum(s[x])){
                parsed += tolower(s[x]);
            }
        }
        int p1 = 0; 
        int p2 = parsed.size()-1;
        while(p2 > p1){
            if(parsed[p1] != parsed[p2]){
                return false;
            }
            p1++;
            p2--;
        }
        return true;
    }
};