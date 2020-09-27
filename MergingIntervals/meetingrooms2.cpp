#include <iostream>
#include <vector>

using namespace std;

// if our current starting is smaller than the previous ending. there needs to be a room for our past one
// reset counters to our current time

// if our current starting is larger than our past ending, we update our counter to our current time
// for ending time, we choose the minimum time of ending times


int minimumRooms(vector<pair<int,int> > times){

    // sort them by first element
    int starting = times[0].first;
    int ending = times[0].second;
    int currRooms = 1;

    for(int i = 1; i < times.size(); i++){
        if(times[i].first < ending){
           starting = times[i].first;
           ending = min(ending, times[i].second);
           currRooms++; 
        }
        else{
            ending = min(ending, times[i].second);
        }
    }
    return currRooms;
}


int main(){
    vector<pair<int,int> > times;
    times.push_back(make_pair(5,10));
    times.push_back(make_pair(15,40));
    times.push_back(make_pair(18,35));
    times.push_back(make_pair(35,70));
    times.push_back(make_pair(41,80));

}