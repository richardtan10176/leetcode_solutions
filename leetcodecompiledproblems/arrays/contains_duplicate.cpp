#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seenelements;
        for(int x = 0; x < nums.size(); x++){
            if(seenelements.count(nums[x]) > 0){
                return true;
            }
            seenelements.insert(nums[x]);
        }
        return false;
    }
};