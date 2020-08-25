// LEETCODE [medium]

/* Given an array of n positive integers and a positive integer s, find the minimal
length of a contiguous subarray of which the sum ≥ s. If there isn't one, return 0 instead. 
Input: s = 7, nums = [2,3,1,2,4,3]
Output: 2 */

class Solution {
public:
    int minSubArrayLen(int S, vector<int>& arr) {
        if(arr.empty())
            return 0;
        int currSum = 0;
        int tail = 0;
        int minNum = 9999;
        if(arr[0] >= S)
            return 1;
        
        for(int i = 0; i < arr.size(); i++){
            currSum += arr[i];
            while(currSum >= S){
                minNum = min(minNum, i - tail + 1);
                currSum -= arr[tail];
                tail++;
            }
        }
            
            
        if(minNum == 9999)
            return 0;
        return minNum;    
    }
};