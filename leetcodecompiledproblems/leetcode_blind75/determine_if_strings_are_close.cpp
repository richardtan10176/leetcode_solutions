#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <unordered_set>
#include <algorithm>
#include <deque>
using namespace std;


class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<int,int> word1Map, word2Map;
        int n1 = word1.size();
        int n2 = word2.size();

        for(int x = 0; x < word1.size(); x++){
            word1Map[word1[x]]++;
        }
        for(int x = 0; x < word2.size(); x++){
            word2Map[word2[x]]++;
        }
        std::vector<int> freq1, freq2;
        std::vector<char> check1, check2;
        for(auto& it: word1Map){
            check1.push_back(it.first);
            freq1.push_back(it.second);
        }
        for(auto& it: word2Map){
            check2.push_back(it.first);
            freq2.push_back(it.second);
        }
        sort(freq1.begin(), freq1.end());
        sort(check1.begin(), check1.end());

        sort(freq1.begin(), freq1.end());
        sort(check2.begin(), check2.end());

        return freq1 == freq2 && check1 == check2;
        
    }
};