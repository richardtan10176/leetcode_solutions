#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>
#include <stdlib.h>
#include <ctype.h>
using namespace std;


class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        queue<int> radQueue;
        queue<int> dirQueue;

        
        for(int x = 0; x < n; x++){
            if(senate[x] == 'R'){ //radiant senator
                radQueue.push(x);
            } else { //dire senator
                dirQueue.push(x);
            }
        }
        
        while(true){
            if(radQueue.empty()){
                return "Dire";
            }
            else if(dirQueue.empty()){
                return "Radiant";
            } 
            else{
                if(radQueue.front() > dirQueue.front()){ //dire beats radiant
                    n++;
                    dirQueue.pop();
                    dirQueue.push(n);
                    radQueue.pop();
                } 
                else{
                    n++;
                    radQueue.pop();
                    radQueue.push(n);
                    dirQueue.pop();
                }
            }
        }
        return "";
    }
};