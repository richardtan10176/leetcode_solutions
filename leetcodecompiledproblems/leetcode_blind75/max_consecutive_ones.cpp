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
    int longestOnes(vector<int>& nums, int k) {
        int p1 = -1;
        int p2 = 0;

        int n = nums.size();

        int curMax = 0;
        int temp = k;
        int tempMax = 0;
        while(p2 < n){
            if(temp < 0){
                //increment left pointer
                if(nums[p1] == 0) {
                    temp++;
                }
                p1++;
                

            } else{
                //increment right
                if(nums[p2] == 0){
                    temp--;
                }
                p2++;
                
            }
            curMax = max(tempMax, curMax);
        }
         

        return curMax;
    }   
};