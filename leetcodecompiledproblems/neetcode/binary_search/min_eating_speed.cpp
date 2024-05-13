#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <cmath>


class Solution {
public:
    double calcTime(std::vector<int>&piles, int k)
    {
        double totalHours = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            int hoursToEatPile = ceil(piles[i] / (double)k);
            totalHours += hoursToEatPile;
        }
        return totalHours;
    }
    int minEatingSpeed(std::vector<int>& piles, int targetHours)
    {
        int low = 1;
        int high = *std::max_element(piles.begin(), piles.end());
        int bestTime = high; 
        while(low <= high)
        {
            int middle = low + (high - low) / 2;
            double hoursToEatAll = calcTime(piles, middle);
            
            if (hoursToEatAll <= targetHours)
            {
                bestTime = middle;
                high = middle - 1;
            } else{
                low = middle + 1;
            } 
        }
        return bestTime;
    }
};