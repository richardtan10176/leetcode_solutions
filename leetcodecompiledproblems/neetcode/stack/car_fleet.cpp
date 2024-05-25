#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>

class Solution {
public:
    int carFleet(int target, std::vector<int>& position, std::vector<int>& speed) {
        std::vector<std::pair<int,int>> arr;
        for(int x = 0; x < position.size(); x++){
            arr.push_back(std::make_pair(position[x],speed[x]));
        }

        std::sort(arr.begin(), arr.end());


        int fleets = 0;
        double curMax = DBL_MIN;
        
        for(int x = position.size()-1; x >= 0; x--){
            double time = (target-arr[x].first)*(1.0/arr[x].second);
            if(time > curMax){
                fleets++;
                curMax = time;
            }
        }

        return fleets;
    }
};