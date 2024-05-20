#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head){
            return head;
        }
        std::unordered_map<Node*, Node*> map;
        Node* newHead = new Node(head->val);
        Node* newTemp = newHead;
        Node* temp = head;
        map[temp] = newTemp;
        while(temp->next  != nullptr){
            temp = temp->next;
            newTemp->next = new Node(temp->val);
            newTemp = newTemp->next;
            map[temp] = newTemp;
        }

        newTemp = newHead;
        temp = head;
        while(newTemp != nullptr){
            newTemp->random = map[temp->random];
            temp = temp->next;
            newTemp = newTemp->next;
        }
        return newHead;
        
    }
};