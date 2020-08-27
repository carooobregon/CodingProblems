/*  Leetcode [ Medium ]
    424. Longest Repeating Character Replacement
    Given a string s that consists of only uppercase English letters, you can perform at most k operations on that string.
    Input:
    s = "ABAB", k = 2
    Output:
    4
*/

class Solution {
public:
    int characterReplacement(string s, int k) {
        int tail = 0;
        int counter = 0;
        int maxlen = 0;
        unordered_map<char,int> letterMap;
        for(int i=0 ; i<s.size() ; i++){
            letterMap[s[i]]++;
            counter = max(counter,letterMap[right]);
            if(i - tail + 1 - counter > k){ 
                char left = s[start];
                letterMap[left]--;
                tail++;
            }
            maxlen = max(maxlen,end-start+1);
        }
        return maxlen;
    }
};
