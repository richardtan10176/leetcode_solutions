#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>


class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string answer;
        bool alt = false;
        while(!word1.empty() || !word2.empty()){
            if(!word1.empty() && !alt){
                answer += word1[0];
                word1 = word1.substr(1);
                alt = true;
            }
            else if(!word2.empty() && alt){
                answer += word2[0];
                word2 = word2.substr(1);
                alt = false;
            }
            else if(word1.empty()){
                answer += word2;
                break;
            }
            else if(word2.empty()){
                answer += word1;
                break;
            }
        }
        return answer;
    }
};
