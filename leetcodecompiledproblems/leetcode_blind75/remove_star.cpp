#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>
using namespace std;



class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        std::vector<char> answerVec;

        for(int x = 0; x < n; x++){
            if(s[x] == '*'){ //found star, pop from stack
                if(x > 0){ //ensure star is not the first char
                    answerVec.pop_back();
                }
            } else { //not star, push to stack
                answerVec.push_back(s[x]);
            }
        }
        string ans(answerVec.begin(), answerVec.end());
        return ans;
    }
};