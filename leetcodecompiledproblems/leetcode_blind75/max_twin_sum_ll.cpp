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


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};class Solution {
public:
    
    int pairSum(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        } 
        if(fast)fast = fast->next;
        //we need to reverse everything past slow

        ListNode* left = slow;
        ListNode* mid = slow->next;
        ListNode* right = mid->next;
    

        while(right){
            mid->next = left;
            left = mid;
            mid = right;
            right = right->next;
        }
        mid->next = left;
        slow->next = nullptr;



        int biggest = INT_MIN;
        ListNode* tempLeft = head;
        ListNode* tempRight = fast;

        while(tempLeft){
            biggest = max(tempLeft->val + tempRight->val, biggest);
            tempLeft = tempLeft->next;
            tempRight = tempRight->next;
        }
        return biggest;

    }
    
};