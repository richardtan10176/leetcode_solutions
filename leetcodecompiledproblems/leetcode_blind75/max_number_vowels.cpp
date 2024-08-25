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
    int maxVowels(string s, int k) {
        int n = s.size();
        int maxVowels = 0;

        unordered_map<char, int> vowelMap = { {'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1} };
        int curVowels = 0;
        for(int x = 0; x < k; x++){
            if(vowelMap[s[x]]){
                curVowels++;
            }
        }

        maxVowels = curVowels;

        for(int x = k; x < n; x++){
            if(vowelMap[s[x]]){
                curVowels++;
            }
            if(vowelMap[s[x - k]]){
                curVowels--;
            }
            maxVowels = max(curVowels, maxVowels);
        }

        return maxVowels;
    }
};
