#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.

unordered_map<char, int> addItems(string s){
    unordered_map myMap;
    for(int i  = 0 ; i < s.length() ; i++){
        letters[s[i]]++;
    }
    return myMap;
}

int sumOdd(unordered_map<char,int> map1, unordered_map<char,int> map2){
    unordered_map<char, int>::iterator it;
    unordered_map<char, int>:: iterator it2;
    int counter = 0;
    for ( it = map1.begin(); it != map1.end(); it++ ) {
        it2 = map2.find(it->first);
        if(it2!= map2.end())
            counter = abs(it2->second - it1->second);
    }
}

int makingAnagrams(string s1, string s2) {
    unordered_map<char,int> letters1 =  addItems(s1);
    unordered_map<char,int> letters2 = addItems(s2);
    int counter = sumOdd(letters1, letters2);  
    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
