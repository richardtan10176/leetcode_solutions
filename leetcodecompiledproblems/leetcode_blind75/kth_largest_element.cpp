#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();

        priority_queue<int> pq;
        for(int x = 0; x < n; x++){
            pq.push(nums[x]);
        }
        int answer;
        for(int x = 0 ; x < k; x++){
            answer = pq.top();
            pq.pop();
        }
        return answer;
    }
};