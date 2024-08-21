#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty() || t.empty()){
            return false;
        }
        int p1 = 0; 
        
        for(int p2 = 0; p2 < t.size(); p2++){
            if(s[p1] == t[p2]){
                p1++;
            }
            if(p1 == s.size()){
                return true;
            }
        }
        return false;
    }   
};