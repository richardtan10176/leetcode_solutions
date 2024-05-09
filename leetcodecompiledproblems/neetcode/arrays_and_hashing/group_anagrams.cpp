#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
      std::unordered_map<std::string, std::vector<std::string>> anagramMap;
      for (const std::string& str : strs) {
          std::string sortedStr = str;
          std::sort(sortedStr.begin(), sortedStr.end());
          anagramMap[sortedStr].push_back(str);
      }

      std::vector<std::vector<std::string>> groupedAnagrams;
      for (const auto& pair : anagramMap) {
          groupedAnagrams.push_back(pair.second);
      }

      return groupedAnagrams;
    }
};