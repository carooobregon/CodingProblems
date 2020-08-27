class Solution {
public:
    vector<int> sortedTwoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        vector<int> ans;
        while(left < right ){
            int sum = nums[left] + nums[right];
            if(sum == target){
                ans.push_back(left);
                ans.push_back(right);
            }
            if(target > sum)
                left++;
            else
                right--;
        }
            
        return ans;
    }
};