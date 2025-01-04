#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <queue>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int answer = 0;
        int n = s.size();
        int curmax = 0;
        for(int x = 0; x < n; x++){
            if(s[x] == ' '){
                continue;
                curmax = 0;
            } else{
                curmax++;
                answer = max(answer, curmax);
            }
        }
        return 0;
    }
};