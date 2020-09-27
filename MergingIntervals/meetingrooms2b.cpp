/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: the minimum number of conference rooms required
     */
     
    void sortByFirstElement(vector<Interval> &intervals){
    sort(intervals.begin(), intervals.end(), 
        [](const Interval & a, const Interval & b) -> bool{ 
            return a.start < b.start; 
        });
    }

    int minMeetingRooms(vector<Interval> &intervals) {
        vector<int> meetings;
        sortByFirstElement(intervals);

        int open = -1;
        
        for(int i = 0; i < intervals.size(); i++){
            for(int j = 0; j < meetings.size(); j++){
                if(meetings[j] <= intervals[i].start){
                    open = j;
                    break;
                }
            }
            if(open != -1){
                meetings[open] = intervals[i].end;
            }
            else{
                meetings.push_back(intervals[i].end);
            }
            sort(meetings.begin(), meetings.end());
            open = -1;
        }
        return meetings.size();
    }
};