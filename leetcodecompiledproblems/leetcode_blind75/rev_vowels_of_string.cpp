#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <queue>
using namespace std;


class Solution {
public:
    std::string reverseVowels(std::string s) {
        std::unordered_map<char, int> isVowel = {
            {'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1},
            {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1}
        };
        
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            while (left < right && !isVowel[s[left]]) {
                left++;
            }
            while (left < right && !isVowel[s[right]]) {
                right--;
            }
            
            if (left < right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        
        return s;
    }
};
