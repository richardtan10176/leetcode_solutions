#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <queue>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        //must find greatest num of candies
        int max = INT_MIN;
        for(int x = 0; x < n; x++){
            max = std::max(max, candies[x]);
        }
        std::vector<bool> answer;
        for(int x = 0; x < n; x++){
            if(candies[x] + extraCandies > max){
                answer.push_back(true);
            } else{
                answer.push_back(false);
            }
        }
        return answer;
    }
};