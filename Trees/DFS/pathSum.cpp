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
    
    
    void dfs(TreeNode* root, int sum, vector<int> &curr, vector<vector<int>> &fin){
        if(!root)
            return;
        
        curr.push_back(root->val);
        if(!root->left && !root->right && root->val == sum){
            fin.push_back(curr);
        } else{
            dfs(root->left, sum - root->val, curr, fin);
            dfs(root->right, sum - root->val, curr, fin);
        }
        
        curr.pop_back();
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> curr;
        vector<vector<int>> fin;
        
        if(!root)
            return fin;
        
        dfs(root, sum, curr, fin);
        
        
        return fin;
    }
};