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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> bfs;
        vector<int> ans;
        if(!root)
            return ans;
        TreeNode* curr = root;
        bfs.push(root);
        while(!bfs.empty()){
            int sz = bfs.size();
            for(int i = 0 ; i <sz; i++){
                curr = bfs.front();
                if(curr->left)
                    bfs.push(curr->left);
                if(curr->right)
                    bfs.push(curr->right);
                bfs.pop();
            }
            ans.push_back(curr->val);
        }
        return ans;
    }
};