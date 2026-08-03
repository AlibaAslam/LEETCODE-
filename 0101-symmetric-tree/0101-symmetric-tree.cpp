class Solution {
    bool check(TreeNode* n1, TreeNode* n2) {
        if (n1 == nullptr && n2 == nullptr) return true;
        if (n1 == nullptr || n2 == nullptr) return false;
        if (n1->val != n2->val) return false;

        return check(n1->left, n2->right) && check(n1->right, n2->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return check(root->left, root->right);
    }
};