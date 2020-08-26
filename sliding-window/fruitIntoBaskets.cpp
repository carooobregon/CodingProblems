// LEETCODE [ medium ]
/* You have two baskets, and each basket can carry any quantity of fruit, but you want each basket to only carry one type of fruit each. 
    Input: [3,3,3,1,2,1,1,2,3,3,4]
    Output: 5
    Explanation: We can collect [1,2,1,1,2].
    If we started at the first tree or the eighth tree, we would only collect 4 fruits.
*/


class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int currNum = 0;
        int maxNum = 0;
        unordered_map<int,int> currFruits; 
        unordered_map<int,int>::iterator it;
        int tail = 0;
        
        for(int i = 0; i < tree.size(); i++){
            currFruits[tree[i]]++;
            it = currFruits.find(tree[tail]);
            while(currFruits.size() > 2 && tail < i){ 
                currFruits[tree[tail]]--;
                it = currFruits.find(tree[tail]);
                if(currFruits[tree[tail]] == 0 ){
                    currFruits.erase(it);                    
                }
                tail++;
                currNum--;
            }
            currNum++;
            maxNum = max(currNum, maxNum);
        }
        return maxNum;
    }
};