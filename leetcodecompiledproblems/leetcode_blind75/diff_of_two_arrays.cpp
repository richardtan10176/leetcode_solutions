#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        unordered_map<int,int> nums1FreqMap;
        for(int x = 0; x < n1; x++){
            nums1FreqMap[nums1[x]]++;
        }

        unordered_map<int,int> nums2Freqmap;
        for(int x = 0; x < n2; x++){
            nums2Freqmap[nums2[x]]++;
        }

        vector<vector<int>> answer(2);
        unordered_map<int,int> temp1;
        unordered_map<int,int> temp2;
        for(int x = 0; x < n1; x++){
            if(!nums2Freqmap[nums1[x]] && !temp1[nums1[x]]){
                temp1[nums1[x]]++;
                answer[0].push_back(nums1[x]);
            }
        }

        for(int x = 0; x < n2; x++){
            if(!nums1FreqMap[nums2[x]] && !temp2[nums2[x]]){
                temp2[nums2[x]]++;
                answer[1].push_back(nums2[x]);
            }
        }

        return answer;



    }
};