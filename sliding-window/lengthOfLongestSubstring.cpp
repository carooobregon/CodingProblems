class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> myLetters;
        unordered_map<char, int> ::iterator it;
        int currS = 0;
        int maxS = 0;
        int tail = 0;
        for(int i = 0; i < s.length(); i++){
            it = myLetters.find(s[i]);
            while(myLetters[s[i]] >= 1 && tail < i){
                it = myLetters.find(s[tail]);
                myLetters[s[tail]]--;
                if(myLetters[s[tail]] == 0)
                    myLetters.erase(it);
                currS--;
                tail++;
                it = myLetters.find(s[i]);
            }
            myLetters[s[i]]++;
            currS++;
            maxS = max(currS, maxS);
        }
        return maxS;
    }

};