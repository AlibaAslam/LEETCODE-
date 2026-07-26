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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;// this will store the answer
         
         if(root==nullptr)
            return ans;
         
        
        queue<TreeNode*>Q;// Queue of node type for BFS traversing for level order

        Q.push(root);// add a root node to start traversing
        Q.push(NULL);// marks the end of the current level

        vector<int>current_level;// this vector will stores the nodes of current levels

        while(!Q.empty())
        {
            TreeNode*curr=Q.front();// get the front node of queue as current
            Q.pop();// remove front node as it is marked as done

            if(curr==nullptr)
            {
                ans.push_back(current_level);// put the completed level to 2d vector ans and  put them as elements of answer vector
                current_level.clear();// clear the current level so that next levels can also be visited

                if(Q.empty())
                {
                    break;
                }
                Q.push(nullptr); // marks end of the next level
                continue;
            }

            current_level.push_back(curr->val);// process the node value

            if(curr->left!=nullptr)
            Q.push(curr->left);

             if(curr->right!=nullptr)
            Q.push(curr->right);


        }

        return ans;
    }
};