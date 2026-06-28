class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;

        vector<int> vec;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        
        int n = vec.size() - 1;
        ListNode* helper = head; 
        while (helper != nullptr) {
            helper->val = vec[n];
            n--;
            helper = helper->next;
        }
        
        return head;
    }
};