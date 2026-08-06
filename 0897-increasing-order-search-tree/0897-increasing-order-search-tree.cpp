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


    void inorder(TreeNode*root, vector<TreeNode*>&arr)
    {
        if(root==nullptr)
        return ;
        inorder(root->left, arr);
        arr.push_back(root);
        inorder(root->right,arr);

    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        // vector having every node of a tree not a node value it contains nodes of a tree
        vector<TreeNode*>arr;
        //STEP 1
        // first do inorder traversal of a given tree
        inorder(root,arr);
        //STEP 2

        // create a new tree
        TreeNode* dummy= new TreeNode(0);
        TreeNode*curr= dummy;

        for(auto node : arr)
        {
            node->left = node->left= nullptr;
            curr->right=node;
            curr=node;
        }
    
        return dummy->right;
        
    }
};