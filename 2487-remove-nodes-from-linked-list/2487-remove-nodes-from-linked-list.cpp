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
    ListNode* removeNodes(ListNode* head) {
        vector<int>ans;
        while(head!=nullptr)
        {
            ans.push_back(head->val);
            head=head->next;

        }
       vector<int>result;
        int max = INT_MIN;
        for(int i=ans.size()-1; i>=0; i--)
        {
            if(ans[i]>=max)
            {
                result.push_back(ans[i]);
                max = ans[i];
            }
        }
        ListNode* dummy =new ListNode(0);
        ListNode * temp=dummy;
        for(int i=result.size()-1; i>=0; i--)
        {
            temp->next=new ListNode(result[i]);
            temp=temp->next;
        }
        
        return dummy->next;
    }
};