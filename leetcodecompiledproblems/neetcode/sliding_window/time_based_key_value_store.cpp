#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for(int x = 1; x < prices.size(); x++){
            if(prices[x] < buyPrice){ //update buy in point
                buyPrice = prices[x];
            } else if((prices[x] - buyPrice) > profit){ //update max
                profit = prices[x] - buyPrice;
            }
        }


        return profit;
    }
};