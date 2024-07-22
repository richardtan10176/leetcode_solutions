#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        if(matrix.empty() || matrix[0].empty()){
            return {};
        }
        std::vector<int> answer;

        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size() - 1;
        
        while(left <= right && top <= bottom) {
            for(int x = left; x <= right; x++) {
                answer.push_back(matrix[top][x]);
            }
            top++;

            for(int x = top; x <= bottom; x++) {
                answer.push_back(matrix[x][right]);
            }
            right--;

            if(top <= bottom) {
                for(int x = right; x >= left; x--) {
                    answer.push_back(matrix[bottom][x]);
                }
                bottom--;
            }

            if(left <= right) {
                for(int x = bottom; x >= top; x--) {
                    answer.push_back(matrix[x][left]);
                }
                left++;
            }
        }
        return answer;
    }
};
