#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int p1 = 0;
        int p2 = 0;
        std::vector<int> temp;
        
        while (p1 < m && p2 < n) {
            if (nums1[p1] < nums2[p2]) {
                temp.push_back(nums1[p1]);
                p1++;
            } else {
                temp.push_back(nums2[p2]);
                p2++;
            }
        }
        
        while (p1 < m) {
            temp.push_back(nums1[p1]);
            p1++;
        }

        while (p2 < n) {
            temp.push_back(nums2[p2]);
            p2++;
        }

        nums1 = temp;
    }
};