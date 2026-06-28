class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            temp = temp->next;
            sz++;
        }
        
        if (n >= sz)
          return head->next;
        
        temp = head;
        for (int i = 1; i < sz - n; i++) {
            temp = temp->next;
        }
        
        temp->next = temp->next->next;
        return head;
    }
};