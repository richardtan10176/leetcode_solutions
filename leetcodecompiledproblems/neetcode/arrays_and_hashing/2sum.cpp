#include <vector>
#include <unordered_map>
using namespace std;


//build a hashmap using values as keys to store their indices
//then interate through nums and search the hashmap to find 
//the complement of nums[i], then 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {0,0};
        unordered_map<int, int> hashmappu;
        int other;
        for(int x = 0; x < nums.size(); x++){
            hashmappu[nums[x]] = x;
        }
        for(int x = 0; x < nums.size(); x++){
            if(hashmappu.count(target-nums[x]) && hashmappu[target-nums[x]] != x){
                return {x,hashmappu[target-nums[x]]};
            }
        }
        return {};
    }
};