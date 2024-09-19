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
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> prefixSums; 
        int sum = 0;
        for(int x = n-1; x >= 0; x--){
            prefixSums[x] = sum;
            sum += nums[x];
        }
        int curSum = 0;
        for(int x = 0;x < n; x++){
            if(prefixSums[x] == curSum){
                return x;   
            }
            curSum += nums[x];
            
        }
        return -1;
        
    }
};