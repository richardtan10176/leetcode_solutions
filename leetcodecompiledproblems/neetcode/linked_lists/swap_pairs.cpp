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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* current = head;
        head = head->next;

        while (current && current->next) {
            ListNode* nextPair = current->next->next; 
            ListNode* second = current->next;

            second->next = current;
            current->next = nextPair;


            if (prev) {
                prev->next = second;
            }
            prev = current;
            current = nextPair;
        }

        return head;
    }
};
