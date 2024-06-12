#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* startPointer = head;
        ListNode* endPointer = head;

        while(endPointer != nullptr){
            bool needStop = false;
            for(int x = 0; x < k; x++){
                endPointer = endPointer->next;
                needStop = true;
            }
            if(needStop){
                break;
            }

            //now reverse between start and end pointer
            ListNode* prev = nullptr;
            ListNode* curr = startPointer;
            ListNode* flw = nullptr;

            while(curr != endPointer){
                flw = curr->next;
                curr->next = prev;
                prev = curr;
                curr = flw;
            }
            startPointer = prev;
            
            startPointer = endPointer;
        }
        return head;
    }
};