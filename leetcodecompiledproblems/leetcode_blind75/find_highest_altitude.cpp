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
    int largestAltitude(vector<int>& gain) {
        int curAlt = 0;
        int answer = 0;
        for(int x = 0; x < gain.size(); x++){
            curAlt += gain[x];
            answer = max(answer, curAlt);
        }
        return answer;
    }
};