struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast->next){
            slow = slow->next;
        }

        ListNode* secondList = slow;
        //reverse everything past slow
        
        ListNode* left = nullptr;
        ListNode* right = slow->next;
        while(right != nullptr){
            slow->next = left;
            left = slow;
            slow = right;
            right = right->next;
        }
        slow->next = left;

        while(head && slow){
            fast = head->next;
            left = slow->next;
            head->next = slow;
            slow->next = fast;
            head = fast;
            slow = left;
        }
        if (head && head->next) head->next->next = nullptr;
    }
};