class Solution {
    void InorderTraversal(TreeNode* root, vector<int>& ans) {
        if (root == nullptr)
            return;
        InorderTraversal(root->left, ans);
        ans.push_back(root->val);
        InorderTraversal(root->right, ans);
        
    }

    pair<int, int> func(vector<int>& ans) {
        int n = ans.size();
        int x = -1, y = -1;
        bool flag = false;

        for (int i = 0; i < n - 1; i++) {
            if (ans[i + 1] < ans[i]) {
                y = ans[i + 1];
                if (flag == false) {
                    x = ans[i];
                    flag = true;
                }
            }
        }
        return {x, y};
    }

    void recover(TreeNode* root, int count, int x, int y) {
        if (root != nullptr) {
            if (root->val == x || root->val == y) {
                root->val = (root->val == x) ? y : x;
                count--;
                if (count == 0) return;
            }
            recover(root->left, count, x, y);
            recover(root->right, count, x, y);
        }
    }

public:
    void recoverTree(TreeNode* root) {
        vector<int> ans;
        InorderTraversal(root, ans);
        
        pair<int, int> swapped = func(ans);
        int x = swapped.first;
        int y = swapped.second;
        
        recover(root, 2, x, y);
    }
};