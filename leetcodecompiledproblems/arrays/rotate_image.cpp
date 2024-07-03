#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        //reflect across diagonal
        for(int y = 0; y < matrix.size(); y++){
            for(int x = y; x < matrix.size(); x++){
                swapInt(matrix[x][y],matrix[y][x]);
            } 
        }
        //swap left and right columns
        for(int y = 0; y < matrix.size(); y++){
            for(int x = 0; x < matrix.size()/2; x++){
                swapInt(matrix[y][x], matrix[y][matrix.size() - x - 1]);
            }
        }
    }
    
    void swapInt(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }
};