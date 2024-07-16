#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::vector<std::string> words;
        std::string curWord;
        for(int x = 0; x < s.size(); x++){
            if(s[x] == ' '){
                if(!curWord.empty()){
                    words.push_back(curWord); 
                    curWord = "";
                }
                continue;
            }
            curWord += s[x];
        }
        std::string answer;
        for(int x = words.size()-1; x >= 0; x--){
            answer = answer + words[x] + " ";
        }
        return answer;
    }
};