class Solution {
    int check(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return 1 + max(check(root->left), check(root->right));
    }

public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        return abs(check(root->left) - check(root->right)) <= 1 
            && isBalanced(root->left) 
            && isBalanced(root->right);
    }
};