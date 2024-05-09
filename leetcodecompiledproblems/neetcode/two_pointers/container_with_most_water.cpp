#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int p1 = 0;               //left pointer
        int p2 = height.size()-1; //right pointer

        int maxArea = 0;

        while(p2 > p1){
            int area = std::min(height[p1],height[p2]) * (p2-p1);
            maxArea = std::max(area,maxArea);

            if(height[p1] < height[p2]){
                p1++;
            }else{
                p2--;
            }
        }
        return maxArea;
    }
};