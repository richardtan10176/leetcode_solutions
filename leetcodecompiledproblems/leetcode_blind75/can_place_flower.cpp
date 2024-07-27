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
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int counter = 0;
        int f = flowerbed.size();

        if(f == 1 && flowerbed[0] == 0 && n <= 1){
          return true;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
          flowerbed[0] = 1;
          counter++;
        }
        for(int i = 1; i < flowerbed.size()-1; i++){
            if(flowerbed[i-1] + flowerbed[i] + flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                counter++;
            }
        }
        if(flowerbed[f-1] == 0 && flowerbed[f-2] == 0){
          flowerbed[f-1] = 1;
          counter++;
        }
        return counter >= n;
    }
};