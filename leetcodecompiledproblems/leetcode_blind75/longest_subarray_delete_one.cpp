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
    int longestSubarray(vector<int>& nums) {
        int p1 = 0, p2 = 0; 
        int n = nums.size();
        int zeroCount = 0; 
        int answer = 0;

        while (p2 < n) {
            if (nums[p2] == 0) {
                zeroCount++; 
            }
            
            while (zeroCount > 1) {
                if (nums[p1] == 0) {
                    zeroCount--;
                }
                p1++;
            }
        
            answer = max(answer, p2 - p1);
            p2++;
        }

        return answer;
    }
};
