#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        stack<int> stackNum;
        stack<string> stackString;

        string curString = "";
        int curNum = 0;
        for(int x = 0; x < n; x++) {
            if(isdigit(s[x])) {
                curNum = curNum * 10 + (s[x] - '0');
            }
            else if(s[x] == '[') {
                stackNum.push(curNum);
                stackString.push(curString);
                curString = "";
                curNum = 0;
            }
            else if(s[x] == ']') {
                int repeatTimes = stackNum.top();
                stackNum.pop();
                string prevString = stackString.top();
                stackString.pop();
                //append the current string repeated 'repeatTimes' times to prevString
                for(int i = 0; i < repeatTimes; i++) {
                    prevString += curString;
                }
                curString = prevString;
            }
            else { 
                curString += s[x];
            }
        }
        return curString;
    }
};
