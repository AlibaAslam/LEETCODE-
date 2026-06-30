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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* ans = new ListNode(0);
        ListNode*temp = head;
        ListNode*temp2 = ans;
        if(head==nullptr)
        {
            return head;
        }
        while(temp!=nullptr)
        {
            temp2->next= new ListNode(temp->val);
            temp2=temp2->next;

            if(temp->next==nullptr){
                break;
                temp= temp->next->next;
            }
              temp= temp->next->next;

        }
        
        temp=head->next;
        while(temp!=nullptr){
             temp2->next= new ListNode(temp->val);
            temp2=temp2->next;
            if(temp->next==nullptr){
              break;
            }
             temp= temp->next->next;

        }
        return ans->next;
        
    }
};