#include <unordered_set>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int x = 0; x < nums.size()-1; x += 2){
            if(nums[x] != nums[x+1]){
                return nums[x];
            }
        }
        return nums[nums.size()];
    }
};