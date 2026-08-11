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
    // void helper(TreeNode* root, vector<int>& ans) {
    //     if (root == nullptr)
    //         return;
    //     helper(root->left, ans);
    //     ans.push_back(root->val);
    //     helper(root->right, ans);
    // }

public:
    int kthSmallest(TreeNode* root, int k) {
        // vector<int> ans;
        // helper(root, ans);
        // return ans[k - 1];
        stack<TreeNode*>st;
        TreeNode*curr=root;
        while(curr!=nullptr || !st.empty())// go to deepest left of the tree
        {
            while(curr!=nullptr)
            {
                st.push(curr);
                curr=curr->left;
            }
            curr= st.top();// pop from stack
            st.pop();
            if(--k==0)
            {
                return curr->val;// early stop
            }
            curr=curr->right;// go to right 
        }
        return -1;
    }
};