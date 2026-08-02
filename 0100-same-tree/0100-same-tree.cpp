/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

    bool same(TreeNode*p, TreeNode*q)
    {
        if(p==nullptr && q==nullptr)// if both the nodes are null (same) return true
        return true;
        if(p==nullptr || q==nullptr)// if one of them is null (not same) return false
        return false;
        if(p->val!=q->val)
        return false;// if values of one of the node differ return false

        return same(p->left, q->left)&& same(p->right, q->right);

        
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return same(p,q);
        
    }
};