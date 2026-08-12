class Solution {
    void helper(TreeNode* root, vector<int>& ans) {
        if (root == nullptr)
            return;
        
        ans.push_back(root->val);
        helper(root->left, ans);
        helper(root->right, ans);
    }

public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) {
            return root;
        }

        if (val < root->val) {
            return searchBST(root->left, val);
        } else {
            return searchBST(root->right, val);
        }
    }

    vector<int> getSubtreeVector(TreeNode* root, int val) {
        TreeNode* target = searchBST(root, val);
        vector<int> ans;
        helper(target, ans);
        return ans;
    }
};