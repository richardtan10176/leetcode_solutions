
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      if(head == nullptr){
        return head;
      }
      ListNode* left = nullptr;
      ListNode* right = head->next;
      while(right != nullptr){
          head->next = left;
          left = head;
          head = right;
          right = right->next;
      }
      head->next = left; //😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂😂
      return head;
  }
};