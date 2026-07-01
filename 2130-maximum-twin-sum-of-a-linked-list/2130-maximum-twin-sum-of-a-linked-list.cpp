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
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        ListNode* newhead=nullptr;
        while(temp!=nullptr){
            ListNode*l= new ListNode(temp->val);
            temp=temp->next;
            l->next=newhead;
            newhead=l;
        }
        int maxm=0;
        ListNode*temp1=head;
        ListNode*temp2=newhead;
        while(temp1!=nullptr)
        {
            maxm=max(maxm,temp1->val+temp2->val);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return maxm;

        
    }
};