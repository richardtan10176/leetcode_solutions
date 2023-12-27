#include <vector>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int rotations = k % nums.size();
        int shifted[rotations];
        int original[nums.size()-rotations];

        for(int x = 0; x < nums.size(); x++){
            if(x < rotations){
                original[x] = nums[x];
            }
            else{
                shifted[x-rotations] = nums[x];
            }
        }
        for(int x = 0; x < nums.size(); x++){
            if(x < rotations){
                nums[x] = shifted[x];
            }
            else{
                nums[x] = original[x-rotations];
            }
        }
    }

};