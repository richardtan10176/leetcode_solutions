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
    ListNode* mergeKLists(std::vector<ListNode*>& lists) {
        if(lists.empty()){
            return nullptr;
        }
        std::priority_queue <int, std::vector<int>, std::greater<int>> pq;  //make da min heap
        for(int x = 0; x < lists.size(); x++){
            ListNode* temp = lists[x];
            while(temp != nullptr){
                pq.push(temp->val);
                temp = temp->next;
            }
        }

        ListNode* head = new ListNode(); //add dummy node
        ListNode* temp = head;
        while(!pq.empty()){
            temp->next = new ListNode(pq.top());
            temp = temp->next;
            pq.pop();
        }
        return head->next;
    }
};