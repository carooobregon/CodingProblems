class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ans(A.size());
        int right = A.size()-1;
        int left = 0;
        int lastIdx = A.size()-1;
        while(left <= right){
            if(pow(A[left],2) > pow(A[right],2)){
                ans[lastIdx] = pow(A[left],2);
                left++;
            }
            else{
                ans[lastIdx] = pow(A[right],2);
                right--;
            }
            lastIdx--;            
        }
        
        return ans;
    }
};