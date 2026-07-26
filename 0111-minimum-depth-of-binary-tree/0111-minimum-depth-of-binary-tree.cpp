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

        if(root->left == NULL) return RightHt + 1;
        if(root->right == NULL) return LeftHt + 1;

        int currHt=min(LeftHt, RightHt)+1;
        return currHt;
    }
public:
    int minDepth(TreeNode* root) {
        int minm=height(root);
        return minm;
        
    }
};