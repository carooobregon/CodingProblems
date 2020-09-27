class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int currMin = 999999;
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        
        if(arr.empty())
            return ans;
        
        for(int i = 0; i < arr.size()-1; i++){
            if(arr[i+1] - arr[i] < currMin){
                currMin = arr[i+1] - arr[i];
                ans.clear();
                ans.push_back({arr[i], arr[i+1]});
            } else if(arr[i+1] - arr[i] == currMin)
                ans.push_back({arr[i], arr[i+1]});
        }
        return ans;
    }
};