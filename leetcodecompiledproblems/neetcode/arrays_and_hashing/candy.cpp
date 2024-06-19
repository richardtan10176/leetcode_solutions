#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    int candy(std::vector<int>& ratings) {
        int answer = ratings.size();
        std::vector<int> candy(ratings.size(),1);

        //general case
        for(int x = 1; x < ratings.size(); x++){
            if((ratings[x] > ratings[x-1] && candy[x] <= candy[x+1])){
                
            }
        }
    }
};