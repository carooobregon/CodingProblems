// Grokking interview patterns [medium]
/* Longest Substring with At Most K Distinct Characters
Given a string S, find the length of the longest substring T that contains at most k distinct characters.
Input: S = "eceba" and k = 3
Output: 4
Explanation: T = "eceb" */


using namespace std;

#include <iostream>
#include <string>
#include <unordered_map>

class LongestSubstringKDistinct {
 public:
  static int findLength(const string& str, int k) {
    int maxLength = 0;
    unordered_map<char,int> currLetters;
    unordered_map<char,int>::iterator it;
    int tail = 0;
    int myLetters = 0;
    for(int i = 0 ; i < str.size(); i++){
      currLetters[str[i]]++;
      it=currLetters.find(str[i]);
      myLetters++;
      while(currLetters.size() > k && tail < str.size()){
        currLetters[str[tail]]--;
        if(currLetters[str[tail]] == 0){
        it=currLetters.find(str[tail]);
          currLetters.erase(it);
        }
        tail++;
        myLetters--;
      }
      if(maxLength < myLetters)
        maxLength = myLetters;
    }
    return maxLength;
  }
};
