#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int p1 = 0;
        int p2 = numbers.size()-1;

        while( (numbers[p2] + numbers[p1]) != target  && p1 < numbers.size() && p2 >= 0){
            if((numbers[p2] + numbers[p1]) > target){
                p2--;
            } else{
                p1++;
            }
        }
        return {p1+1,p2+1};
    }
};