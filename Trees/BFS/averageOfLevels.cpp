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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> answer;
        if(!root)
            return answer;
        queue<TreeNode*> bfs;
        bfs.push(root);
        
        while(!bfs.empty()){
            double currSum = 0.00;
            double sz = bfs.size();
            for(int i = 0 ; i < sz; i++){
                TreeNode* curr = bfs.front();
                currSum += curr->val;
                if(curr->right)
                    bfs.push(curr->right);
                if(curr->left)
                    bfs.push(curr->left);
                bfs.pop();
            }
            answer.push_back(currSum/sz);
        }
        return answer;
    }
};