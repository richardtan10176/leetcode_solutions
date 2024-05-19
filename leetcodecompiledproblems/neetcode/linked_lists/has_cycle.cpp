#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::unordered_map<ListNode*, int> freqMap;

        while(head != nullptr){
            freqMap[head]++;
            if(freqMap[head] > 1){
                return true;
            }
            head = head->next;
        }
        return false;
    }
};