class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if(head == nullptr || head->next == nullptr || left == right )
            return head;
        
        ListNode* dummy = new ListNode(0, head);
        ListNode* temp = dummy;
        
        for(int i = 1; i < left; i++){
            temp = temp->next;
        }
        
        ListNode* temp2 = temp;
        ListNode* temp3 = temp->next;
        ListNode* curr = temp3;
        ListNode* prev = nullptr;
        
        for(int i = 0; i < right - left + 1; i++){
            ListNode* t = curr->next;
            curr->next = prev;
            prev = curr;
            curr = t;
        }
        
        temp2->next = prev;
        temp3->next = curr;
        
        ListNode* result = dummy->next;
        delete dummy; 
        return result;
    }
};