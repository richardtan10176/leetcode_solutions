#include <vector>
using namespace std;

//actual solution to c&p
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currval = 101;
        int currind = 0;
        for(int x = 0; x <= nums.size(); x++){
            if(nums[x] != currval){//new value found
                currval = nums[x];
                nums[currind] = currval;
                currval = nums[x];
                currind++;
            }
            else{//same value
                continue;
            }
        }
        return currind;
    }

};