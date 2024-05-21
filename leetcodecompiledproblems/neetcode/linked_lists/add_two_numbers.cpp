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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* tempTail = temp;
        int carry = 0;
        int digit1;
        int digit2;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            if(l1) digit1 = l1->val;
            else digit1 = 0;

            if(l2) digit2 = l2->val;
            else digit2 = 0;
            int sum = digit1 + digit2 + carry;
            int num = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(num);
            tempTail->next = newNode;
            tempTail = tempTail->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode* last = temp->next;
        delete temp;
        return last;
    }
};
