#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* cur = head;

        while (cur != nullptr) {
            size++;
            cur = cur->next;
        }




        if (size == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        cur = head;
        for (int i = 1; i < size - n; i++) {
            cur = cur->next;
        }

        ListNode* nodeToRemove = cur->next;
        cur->next = nodeToRemove->next;
        delete nodeToRemove;

        return head;
    }
};