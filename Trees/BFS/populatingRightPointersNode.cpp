/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> bfs;
        Node* curr = root;
        if(!root)
            return NULL;
        bfs.push(curr);
        
        while(!bfs.empty()){
            int sz = bfs.size();
            for(int i = 0 ; i < sz; i++){
                curr = bfs.front();
                if(curr->left){
                    bfs.push(curr->left);
                }
                if(curr->right){
                    bfs.push(curr->right);
                }
                bfs.pop();
                if(i+1 >= sz){
                    curr->next = NULL;
                } else
                    curr->next = bfs.front();
            }
        }
        return root;
    }
};