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
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        int counter = 0;

        for (int num : nums) {
            int complement = k - num;
            if (freqMap[num] > 0 && freqMap[complement] > 0) {
                if (num == complement && freqMap[num] < 2) {
                    continue;
                }
                counter++;
                freqMap[num]--;
                freqMap[complement]--;
            }
        }

        return counter;
    }
};