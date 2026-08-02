/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

    bool rootToNodePath(TreeNode* root, TreeNode* target, vector<TreeNode*> &path)
    {
        if (root == nullptr)
            return false;

        path.push_back(root);

        if (root == target)
        {
            return true;
        }

        if (rootToNodePath(root->left, target, path) || rootToNodePath(root->right, target, path))
        {
            return true;
        }

        path.pop_back();
        return false;
    }

    TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        vector<TreeNode*> path1;
        vector<TreeNode*> path2;

        rootToNodePath(root, p, path1);
        rootToNodePath(root, q, path2);

        TreeNode* lca = nullptr;

        for (int i = 0, j = 0; i < path1.size() && j < path2.size(); i++, j++)
        {
            if (path1[i] != path2[j])
                return lca;
            lca = path1[i];
        }

        return lca;
    }

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return LCA(root, p, q);
    }
};