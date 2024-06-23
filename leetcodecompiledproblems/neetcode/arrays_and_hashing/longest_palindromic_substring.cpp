    #include <vector>
    #include <unordered_map>
    #include <iostream>
    #include <algorithm>
    #include <stdio.h>
    #include <ctype.h>
    #include <stack>
    #include <queue>

    class Solution {
    public:
        std::string longestPalindrome(std::string s) {
            if(s.size() < 2){
                return s;
            }
            //find "seeds" of palindrome
            int curLargestSize = 0;
            std::string largestString = "";
            for(int x = 1; x < s.size(); x++){
                if(s[x-1] == s[x+1]){ //odd palindrome
                    //now find the size of this palindrome
                    int p1 = x-1;
                    int p2 = x+1;
                    int size = 1;
                    std::string str{s[x]};
                    while( p1 >= 0 && p2 < s.size() && s[p1] == s[p2] ){
                        str = s[p1] + str;
                        str += s[p2];

                        p2++;
                        p1--;
                        size += 2;
                    }
                    if(size > curLargestSize){
                        curLargestSize = size;
                        largestString = str;
                    }
                } else if(s[x] == s[x-1]){  //even palindrome
                    int p1 = x-2;
                    int p2 = x+1;
                    int size = 2;
                    std::string str{s[x-1],s[x]};
                    while(p1 >= 0 && p2 < s.size() &&  s[p1] == s[p2] ){
                        str = s[p1] + str;
                        str += s[p2];

                        p2++;
                        p1--;
                        size += 2;
                    }
                    if(size > curLargestSize){
                        curLargestSize = size;
                        largestString = str;
                    }
                    
                }
            }
            return largestString;
        }
        
    };