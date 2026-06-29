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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy =new ListNode(0);
        int x;
        int y;
        int sum=0;
        int carry=0;
        ListNode *temp =dummy;
        while(l1!=nullptr || l2!=nullptr)
        {
            if(l1==nullptr)
            {
                x=0;
            }
            else{
                x=l1->val;
            }
            
            if(l2==nullptr)
            {
                y=0;
            }
            else{
                y=l2->val;
            }
            sum=x+y+carry;
            carry=sum/10;
            temp->next= new ListNode(sum%10);
            temp=temp->next;
            if(l1!=nullptr)
            l1=l1->next;
            if(l2!=nullptr)
            l2=l2->next;

        }
        if(carry!=0)
        {
            temp->next = new ListNode(carry);
        }
        return dummy->next;        
    }
};