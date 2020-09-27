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
    void dfs(TreeNode* root, vector<vector<int>> &ans, vector<int> curr){
        if(!root)
            return;
        
        if(!root->left && !root->right){
            curr.push_back(root->val);
            ans.push_back(curr);
        }
        else{
            curr.push_back(root->val);
            dfs(root->left, ans, curr);
            dfs(root->right, ans, curr);
            curr.pop_back();
        }
    }
        
    string formAns(vector<int> ans){
        string myS;
        myS+=to_string(ans[0]);
        for(int i = 1 ; i < ans.size(); i++){
            myS+="->";
            myS+= to_string(ans[i]);
        }
        return myS;
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> ans;
        vector<string> fin;
        if(!root)
            return fin;
        
        vector<int> curr;
        dfs(root, ans, curr);
        for(int i = 0 ; i < ans.size(); i++)
            fin.push_back(formAns(ans[i]));
        return fin;
    }
};