#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>
#include <utility>

class Solution {
public:
    std::vector<int> frequencySort(std::vector<int>& nums) {
        std::unordered_map<int, int> freqMap;
        for (int x = 0; x < nums.size(); x++) {
            freqMap[nums[x]]++;
        }

        std::vector<std::pair<int, int>> vectorPair;
        for (auto& it : freqMap) {
            vectorPair.push_back(std::make_pair(it.second, it.first));
        }

        std::sort(vectorPair.begin(), vectorPair.end());

        std::vector<int> answer;
        for (int x = 0; x < vectorPair.size(); x++) {
            //check for multiple elements with the same frequency
            if (x < vectorPair.size() - 1 && vectorPair[x].first == vectorPair[x + 1].first) {
                int counter = x;
                std::vector<std::pair<int, int>> tempVector;
                while (counter < vectorPair.size() && vectorPair[counter].first == vectorPair[x].first) {
                    tempVector.push_back(std::make_pair(vectorPair[counter].second, vectorPair[counter].first));
                    counter++;
                }
                std::sort(tempVector.begin(), tempVector.end(), std::greater<std::pair<int, int>>());
                for (int i = 0; i < tempVector.size(); i++) {
                    for (int k = 0; k < tempVector[i].second; k++) {
                        answer.push_back(tempVector[i].first);
                    }
                }
                x = counter - 1;
            } else {
                for (int y = 0; y < vectorPair[x].first; y++) {
                    answer.push_back(vectorPair[x].second);
                }
            }   
        }

        return answer;
    }
};
