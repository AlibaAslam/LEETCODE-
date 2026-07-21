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
    ListNode* insertionSortList(ListNode* head) {
        if(head==nullptr || head->next== nullptr)
        return head;

        //Create a dummy node 
        ListNode * dummy = new ListNode;
        ListNode* curr = head;
        while(curr!=nullptr)
        {
            //traversing previous node until it gets a valid position for currnode value
            ListNode * prev= dummy;
            // checking necassary condition for sorting
            while(prev->next!=nullptr && prev->next->val <= curr->val)
            {
                prev=prev->next;
            }
            // fitting curr node value to the appropriate position identified by the previous node
            ListNode* NXT = curr->next;
            curr->next= prev->next;
            prev->next=curr;
            curr=NXT;
        }
        return dummy->next;
    }
};