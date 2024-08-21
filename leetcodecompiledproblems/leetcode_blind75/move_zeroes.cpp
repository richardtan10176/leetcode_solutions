#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1 = 0; 
        // Move non-zero elements to the front
        for (int p2 = 0; p2 < nums.size(); ++p2) {
            if (nums[p2] != 0) {
                // Swap elements at p1 and p2
                swap(nums[p1], nums[p2]);
                p1++;
            }
        }
        return;
    }
};