#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

//build a hashmap with char's as keys and the frequency as the value
//then iterate through the map with auto iterator to verify 
//all frequencies cancelled out to 0

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        if(s.size() != t.size()){
            return false;
        }
        int n = s.size();
        for(int x = 0; x < s.size(); x++){
            count[s[x]]++;
            count[t[x]]--;
        }
        for(auto x : count){
            if(x.second != 0){
                return false;
            }
        }
        return true;

    }
};