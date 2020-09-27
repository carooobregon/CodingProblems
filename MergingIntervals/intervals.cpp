class Solution {
public:
    
    void sortByFirstElement(vector<vector<int> > &intervals){
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>> ans;
        
        if(intervals.empty())
            return ans;
            
        sortByFirstElement(intervals); // O (nLogn)
        
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
};