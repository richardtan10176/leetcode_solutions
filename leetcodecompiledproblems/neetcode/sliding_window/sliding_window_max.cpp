#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>
class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::deque<int> dq;
        std::vector<int> answer;
        int N = nums.size();

        for (int x = 0; x < k; ++x) {
            while (!dq.empty() && nums[dq.back()] < nums[x]) {
                dq.pop_back();
            }
            dq.push_back(x);
        }

        for (int x = k; x < N; ++x) {
            answer.push_back(nums[dq.front()]);

            while (!dq.empty() && dq.front() <= x - k) {
                dq.pop_front();
            }

            while (!dq.empty() && nums[x] >= nums[dq.back()]) {
                dq.pop_back();
            }

            dq.push_back(x);
        }

        answer.push_back(nums[dq.front()]);

        return answer;
    }
};