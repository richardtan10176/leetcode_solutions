#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    bool isValid(std::string s) {
        std::vector<char> stack;
        for(int x = 0; x < s.size(); x++){
            switch(s[x]){
                case '(':
                    stack.push_back(s[x]);
                    break;
                case '{':
                    stack.push_back(s[x]);
                    break;
                case '[':
                    stack.push_back(s[x]);
                    break;
                case ')':
                    if(!stack.empty() && stack.back() == '('){
                        stack.pop_back();
                    }
                    else{
                        stack.push_back(s[x]);
                    }
                    break;
                case '}':
                    if(!stack.empty() && stack.back() == '{'){
                        stack.pop_back();
                    }
                    else{
                        stack.push_back(s[x]);
                    }
                    break;
                case ']':
                    if(!stack.empty() && stack.back() == '['){
                        stack.pop_back();
                    } 
                    else{
                        stack.push_back(s[x]);
                    }
                    break;
                default:
                    continue;

            }
        }
        if(stack.empty()){
            return true;
        }
        return false;
    }
};