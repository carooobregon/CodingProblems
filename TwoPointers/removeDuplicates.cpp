class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int right = 1;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[right - 1] != nums[i]){
                nums[right] = nums[i];
                right++;
            }
        }
        return right;
    }
};