class Solution {
public: 
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size() < 3)
            return ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-2; i++){
            if(i > 0 && nums[i] == nums[i -1])
                continue;
            int left = i+1;
            int right = nums.size()-1;
            int n = nums[i] * -1;
            while(left < right){
                if(nums[left] + nums[right] == n){
                    vector<int> temp;
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    temp.push_back(nums[i]);
                    ans.push_back(temp);
                    cout << nums[left] << " " << nums[right] << " " << nums[i] << " ";
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1])
                        left++;
                    while(left < right && nums[right] == nums[right+1])
                        right--;
                }
                else if(nums[left] + nums[right] > n){
                    right--;
                } else
                    left++;
            }
        }
        return ans;
    }
};