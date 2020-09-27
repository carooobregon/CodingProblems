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
    void dfs(TreeNode* root, int sum, vector<int> &curr, int &winning){
        if(!root)
            return;
        curr.push_back(root->val);
        int mySum = 0;
        for(int i = curr.size()-1 ; i >= 0; i--){
            mySum += curr[i];
            if(mySum == sum){
                winning++;
            }
        }
        dfs(root->left, sum, curr, winning);
        dfs(root->right, sum, curr, winning);
        curr.pop_back();
    }
    
    int pathSum(TreeNode* root, int sum) {
        vector<int> curr;
        int win = 0;
        if(!root)
            return 0;
        dfs(root, sum, curr, win);
        return win;
    }
};