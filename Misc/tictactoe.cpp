#include <iostream>

using namespace std;

void move(int n, vector<int> play){
    // play = {coordX, coordY, playerN}
    unordered_set<pair<int,int>> d1;
    unordered_set<pair<int,int>> d2;

    unordered_map <string, pair<int, int> > pos; 
    for(int i = 0; i < n; i++){
        string n = 'r' + to_string(i);
        pos[n] = make_pair(n-1, -1);
    }

    for(int i = 0; i < play.size(); i++){
        d1.insert(make_pair(i,i));
    }

    for(int i = 0; i <play.size(); i++){
        d2.insert(make_pair(i, n-1-i));
    }

    for(int i = 0; i < n; i++){
        string n = 'c' + to_string(i);
        pos[n] = make_pair(n, -1);
    }

    pos["d1"] = make_pair(n, -1);
    pos["d2"] = make_pair(n, -1);

    // part of main diagonal
    if(d1.find(make_pair(play[0], play[1])) != d1.end()){
        if(pos["d1"].second == -1){
            pos["d1"].second = play[2];
            pos["d1"].first--;
        }
        else if(pos["d1"].second == play[2]){
            pos["d1"].first--;
        }
        else if(pos["d1"].second != play[2]){
            pos["d1"].second = 100;
        }
    }


}

int main(){


}
