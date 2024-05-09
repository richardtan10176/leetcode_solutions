#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();

        std::vector<int> prefix(n);
        std::vector<int> suffix(n);
        std::vector<int> productResult(n);

        prefix[0] = 1;
        suffix[n-1] = 1;

        for(int x = 1; x < n; x++){
            prefix[x] = prefix[x-1] * nums[x-1];
        }
        for(int x = n-2; x >= 0; x--){
            suffix[x] = suffix[x+1] * nums[x+1];
        }

        for(int x = 0; x < n; x++){
            productResult[x] = prefix[x] * suffix[x];
        }

        return productResult;
    }
};