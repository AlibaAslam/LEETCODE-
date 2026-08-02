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

    TreeNode* LCA(TreeNode* root, int n1, int n2)
    {
        if (root == nullptr)
            return nullptr;

        if (root->val == n1 || root->val == n2)
            return root;

        TreeNode* leftLCA = LCA(root->left, n1, n2);
        TreeNode* rightLCA = LCA(root->right, n1, n2);

        if (leftLCA != nullptr && rightLCA != nullptr)
        {
            return root;
        }

        return leftLCA == nullptr ? rightLCA : leftLCA;
    }

    int dist(TreeNode* root, int n)
    {
        if (root == nullptr)
            return -1;
        if (root->val == n)
            return 0;

        int leftDist = dist(root->left, n);
        if (leftDist != -1)
        {
            return leftDist + 1;
        }
        int rightDist = dist(root->right, n);
        if (rightDist != -1)
        {
            return rightDist + 1;
        }

        return -1;
    }

public:
    int minDiffInBST(TreeNode* root)
    {
        int minDiff = INT_MAX;
        TreeNode* prev = nullptr;

        auto inorder = [&](auto& self, TreeNode* node) -> void {
            if (!node) return;
            self(self, node->left);
            if (prev) {
                minDiff = min(minDiff, node->val - prev->val);
            }
            prev = node;
            self(self, node->right);
        };

        inorder(inorder, root);
        return minDiff;
    }
};