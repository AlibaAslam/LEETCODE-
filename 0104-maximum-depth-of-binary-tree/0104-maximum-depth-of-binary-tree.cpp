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
    int height(TreeNode* root)
    {
        if(root==NULL)
        return 0;

        int LeftHt=height(root->left);
        int RightHt=height(root->right);

        int currHt=max(LeftHt, RightHt)+1;
        return currHt;
    }
public:
    int maxDepth(TreeNode* root) {
        int maxm = height(root);
        return maxm;
        
    }
};