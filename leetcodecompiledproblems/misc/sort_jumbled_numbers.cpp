#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>
#include "../../../../../../../../msys64/ucrt64/include/c++/13.2.0/experimental/numeric"
using namespace std;


class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        std::vector<std::pair<int,int>> sortPairVect;

        for(int i = 0; i < nums.size(); i++){
            int curNum = nums[i];
            int newNum = 0;
            int counter = 1;
            while(curNum > 0){
                int temp = mapping[curNum % 10];
                newNum += temp*counter;
                curNum /= 10;
                counter *= 10;
            }
            sortPairVect.push_back(std::make_pair(newNum, nums[i]));
        }
        std::stable_sort(sortPairVect.begin(), sortPairVect.end());
        std::vector<int> answer;
        for(int x = 0; x < sortPairVect.size(); x++){
            answer.push_back(sortPairVect[x].second);
        }
        return answer;
    }
};