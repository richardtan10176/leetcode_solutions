#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>

class Solution {
public:
    std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights) {
        std::vector<std::pair<int, std::string>> nameHeightsPairs;
        for(int x = 0; x < names.size(); x++){
            nameHeightsPairs.push_back(std::make_pair(heights[x],names[x]));
        }
        std::sort(nameHeightsPairs.begin(), nameHeightsPairs.end());
        std::vector<std::string> answer;
        for(int x = nameHeightsPairs.size()-1; x >= 0; x--){
            answer.push_back(nameHeightsPairs[x].second);
        }
        return answer;
    }
};  