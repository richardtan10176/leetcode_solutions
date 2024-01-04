#include <vector>
#include <unordered_set>
using namespace std;

//build a hashmap and while doing so, check if the inserted element
//has already been inserted. if so, there is a dupe value
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