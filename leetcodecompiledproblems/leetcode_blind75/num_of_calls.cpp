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


class RecentCounter {
private:
    std::queue<int> records;
    int start;

public:
    RecentCounter() : start(0) {}

    int ping(int t) {
        records.push(t);
        while(records.front() < t - 3000){
            records.pop();
        }
        return records.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */