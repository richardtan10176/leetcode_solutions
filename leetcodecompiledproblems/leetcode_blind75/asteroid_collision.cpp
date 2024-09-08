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
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> answer;
        for (int asteroid : asteroids) {
            bool destroyed = false;
            while (!answer.empty() && asteroid < 0 && answer.back() > 0) {
                if (abs(answer.back()) < abs(asteroid)) {
                    answer.pop_back();
                } else if (abs(answer.back()) == abs(asteroid)) {
                    answer.pop_back();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }
            if (!destroyed) {
                answer.push_back(asteroid);
            }
        }
        return answer;
    }
};
