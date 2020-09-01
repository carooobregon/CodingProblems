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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int lvl = 0;
        queue<TreeNode*> bfs;
        TreeNode* curr = root;
        bfs.push(root);
        while(!bfs.empty()){
            int sz = bfs.size();
            lvl++;
            for(int i = 0 ; i < sz; i++){
                curr = bfs.front();
                if(!curr->left && !curr->right)
                    return lvl;
                if(curr->left)
                    bfs.push(curr->left);
                if(curr->right)
                    bfs.push(curr->right);
                bfs.pop();
            }
        }
        return lvl;
    }
};