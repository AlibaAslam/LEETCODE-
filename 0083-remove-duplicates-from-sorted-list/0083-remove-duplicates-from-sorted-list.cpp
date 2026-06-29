/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
            if(head==nullptr)
            return nullptr;

            if(head->next==nullptr)
            return head;
             ListNode* temp= head;
            int val =temp->val;
             while(temp->next!=nullptr)
             {
                if(val!=temp->next->val)
                {
                    temp= temp->next;
                    val=temp->val;
                }
                else{
                    temp->next=temp->next->next;
                }

             }       
    return head;
        
    }
};