#include <vector>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        bool hasShare = false;
        int buyprice = 0;
        int profit = 0;
        for(int x = 0; x < prices.size()-1; x++){
            //buy logic
            if(prices[x] > prices[x+1] && !hasShare){
                continue;
            }
            else if (prices[x] < prices[x+1] && !hasShare){
                hasShare = true;
                buyprice = prices[x];
            }



            //sell logic
            else if(prices[x] < prices[x+1] && hasShare){
                continue;
            }
            else if (prices[x] > prices[x+1] && hasShare){
                hasShare = false;
                profit += prices[x] - buyprice;
            }


            
        }
        if(hasShare){
            profit += prices[prices.size()-1] - buyprice;
        }
        return profit;
    }
};