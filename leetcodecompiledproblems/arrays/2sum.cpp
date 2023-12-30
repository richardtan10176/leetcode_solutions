#include <vector>
#include <unordered_map>
using namespace std;

/*beta O(n^2) solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {0,0};
        for(int x = 0; x < nums.size()-1; x++){
            for(int y = x+1; y < nums.size(); y++){
                if(nums[x]+nums[y] == target){
                    result[0] = nums[x];
                    result[1] = nums[y];
                    return result;  
                }
            }
        }
        
        return result;
        
    }
};

*/
//gigachad linear time solution
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