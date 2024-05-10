#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        std::vector<int> operandStack;
        
        for(int x = 0; x < tokens.size(); x++){
            if (tokens[x].size() > 1 || isdigit(tokens[x][0])) {
                operandStack.push_back(std::stoi(tokens[x]));
                continue;
            }

            int operand2 = operandStack.back();
            operandStack.pop_back();
            int operand1 = operandStack.back();
            operandStack.pop_back();

            if(tokens[x] == "+"){
                operandStack.push_back(operand1 + operand2);
            }
            else if(tokens[x] == "-"){
                operandStack.push_back(operand1 - operand2);
            }
            else if(tokens[x] == "*"){
                operandStack.push_back(operand1 * operand2);
            }
            else if(tokens[x] == "/"){
                operandStack.push_back(operand1 / operand2);
            }
        }
        if(operandStack.empty()){
            return operandStack[0];
        }
        return operandStack.back();
    }
};