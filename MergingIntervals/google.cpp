#include <iostream>

using namespace std;

// sorteas por start time

// sorteas por capacity tus rooms

// haces un map <endtime, a>

// si el tiempo del room es menor o igual a tu current start time y el capacity es posible
// agregas al mapa en el q pongas
// y si no tienes capacidad, iteras

void sortByCapacity(vector<pair<int,int> &vec){
    sort(vec.begin(), vec.end(), 
        [](const pair<int,int> &a, const pair<int,int> &b) -> bool{
            return a.first < b.first;
        });
    )
}

void googleMerge(vector<pair<char,int> > rooms, vector<vector<int> > meetings){
    sort(rooms.begin(), rooms.end());
    sort(meeting.begin(), meeting.end());
    vector<pair <int, char> > roomsEndTime;

    for(int i = 0; i < rooms.size(); i++){
        roomsEndTime.push_back(make_pair(0, rooms[i].second));
    }

    unordered_map<char, int> capacity
    vector<pair<string, vector<int> > > ans;

    for(int i = 0; i < meetings.size(); i++){
        for(int j = 0; j < roomsEndTime.size(); j++){
            if(meetings[i][0] >= roomsEndTime[j].first && capacity[roomsEnTime[j].second] >= meetings[i][2]){
                roomsEndTime[j].first = meetings[i][1];
                ans.push_back(make_pair(roomsEndTime[j].second, meetings[i]));s
            }
        }
    }
    return ans;
}

int main(){

}