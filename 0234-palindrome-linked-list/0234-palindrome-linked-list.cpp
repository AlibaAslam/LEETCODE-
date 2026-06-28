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
    bool isPalindrome(ListNode* head) {
        vector<int>vec;
     ListNode*temp=head;
     int sz=0;
     while(temp!=nullptr)
    {
        vec.push_back(temp->val);
        temp=temp->next;
        sz++;
    }
    int first=0;
    sz=sz-1;
    while(sz>first){
       if( vec[first]!=vec[sz]){
        return false;
       }
        sz--;
        first++;
    }
    return true;
        
    }
};