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
    std::string intToRoman(int num) {
        std::string answer;

        while(num > 0){
            if(num >= 1000){
                answer += "M";
                num -= 1000;
            } else if(num >= 500){
                if(firstDigit(num) == 9){ //900
                    answer += "CM";
                    num -= 900;
                    continue;
                }
                answer += "D";
                num -= 500;
            } else if(num >= 100){
                if(firstDigit(num) == 4){ //400
                    answer += "CD";
                    num -= 400;
                    continue;
                }
                answer += "C";
                num -= 100;
            } else if(num >= 50){
                if(firstDigit(num) == 9){ //90
                    answer += "XC";
                    num -= 90;
                    continue;
                }
                answer += "L";
                num -= 50;
            } else if(num >= 10){
                if(firstDigit(num) == 4){ //40
                    answer += "XL";
                    num -= 40;
                    continue;
                }
                answer += "X";
                num -= 10;
            } else if(num >= 5){
                if(firstDigit(num) == 9){ //9
                    answer += "IX";
                    num -= 9;
                    continue;
                }
                answer += "V";
                num -= 5;
            } else if(num >= 1){
                if(firstDigit(num) == 4){ //4
                    answer += "IV";
                    num -= 4;
                    continue;
                }
                answer += "I";
                num -= 1;
            }
        }
        return answer;
    }
    int firstDigit(int n){ 
        while (n >= 10)  
            n /= 10; 
        
        return n; 
    } 
};