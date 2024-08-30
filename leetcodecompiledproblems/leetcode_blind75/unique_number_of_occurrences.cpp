#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <unordered_set>
#include <algorithm>
#include <deque>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        unordered_map<int, int> freqMap;
        for(int num : arr) {
            freqMap[num]++;
        }
        unordered_set<int> freqSet;
        for (const auto& entry : freqMap) {
            if (freqSet.find(entry.second) != freqSet.end()) {
                return false;
            }
            freqSet.insert(entry.second);
        }
        
        return true;
    }
};