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
        if(root == nullptr)
            return 0;
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        int current = max(leftheight, rightheight) + 1;
        return current;
    }

    int diam(TreeNode* root)
    {
        if(root == nullptr)
            return 0;
        int currdiam = height(root->left) + height(root->right);
        int leftdiam = diam(root->left);
        int rightdiam = diam(root->right);

        return max(currdiam, max(leftdiam, rightdiam));
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        return diam(root);
    }
};