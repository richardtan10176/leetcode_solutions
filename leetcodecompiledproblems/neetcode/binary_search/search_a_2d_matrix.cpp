#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int rowOfInterest = 0;
        bool found = false;
        for(int x = 0; x < matrix.size(); x++){
            if(target <= matrix[x].back()){
                found = true;
                rowOfInterest = x;
                break;
            }
        }
        
        //now simply run binary search on matrix[rowOfInterest]
        std::vector<int>& array = matrix[rowOfInterest];
        int low = 0;
        int high = array.size()-1;
        
        while(low <= high){
            int middle = low + (high - low)/2;
            if(array[middle] == target){
                return true;
            } else if(array[middle] > target){
                high = middle - 1;
            } else if(array[middle] < target){
                low = middle + 1;
            }
        }
        return false;
    }
};