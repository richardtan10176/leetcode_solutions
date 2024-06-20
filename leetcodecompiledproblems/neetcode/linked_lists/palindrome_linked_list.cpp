#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        std::string s;
        while(temp != nullptr){
            char c = temp->val;
            s += c;
            temp = temp->next;
        }
        std::cout << s << std::endl;
        int p1 = 0;
        int p2 = s.size()-1;
        while(p2 > p1){
            if(s[p1] != s[p2]){
                return false;
            }
            p2--;
            p1++;
        }
        return true;
    }
};