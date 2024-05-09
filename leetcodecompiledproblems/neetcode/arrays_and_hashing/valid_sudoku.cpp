#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        

        //check rows
        for(int x = 0; x < 9; x++){
            std::unordered_map<char,int> freqMap;
            for(int y = 0; y < 9; y++){
                if(board[x][y] == '.') continue;
                freqMap[board[x][y]]++;
                if(freqMap[board[x][y]] > 1){
                    return false;
                }
            }
        }

        //check rows
        for(int x = 0; x < 9; x++){
            std::unordered_map<char,int> freqMap;
            for(int y = 0; y < 9; y++){
                if(board[y][x] == '.') continue;
                freqMap[board[y][x]]++;
                if(freqMap[board[y][x]] > 1){
                    return false;
                }
            }
        }

        for(int x = 0; x < 3; x++){
            for(int y = 0; y < 3; y++){
                std::unordered_map<char,int> freqMap;
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        if(board[i + (x*3)][j + (y*3)] == '.') continue;
                        freqMap[board[i + (x*3)][j + (y*3)]]++;
                        if(freqMap[board[i + (x*3)][j + (y*3)]] > 1){
                            return false;
                        }
                    }
                }
            }
        }

        return true;

    }
};