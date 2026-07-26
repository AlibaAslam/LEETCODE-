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
        int count(TreeNode* root)
        {
            if(root==NULL)
            return 0;

            int leftCount = count(root->left);
             int rightCount = count(root->right);

            return leftCount+rightCount+1;


          
        }
     
public:
    int countNodes(TreeNode* root) {
        int ans = count(root);
        return ans;

        
    }
};