class Solution {
public:
    vector<vector<int>> arrangeIntervals(vector<vector<int>> &intervals){
        vector<vector<int>> ans;
        int start = intervals[0][0];
        int ending = intervals[0][1];
        
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] <= ending){
                if(intervals[i][1] >= ending){
                    ending = intervals[i][1];
                }
            } else {
                ans.push_back({start,ending});
                start = intervals[i][0];
                ending = intervals[i][1];
            }
        }
        ans.push_back({start,ending});
        return ans;
    }
        
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       vector<vector<int>> ans;
        bool in = false;
        
        if(intervals.empty())
            return {newInterval};

        for(int i = intervals.size()-1 ; i >= 0; i--){
            if(intervals[i][0] <= newInterval[0]){
                cout << "in at " << i;
                intervals.insert(intervals.begin()+i+1, newInterval);
                in = true;
                break;
            } else{
                cout << intervals[i][0] << " " << newInterval[0] << endl;
            }
        }
        if(!in)
            intervals.insert(intervals.begin(), newInterval);
        return arrangeIntervals(intervals);;
        
    }
};