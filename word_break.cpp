/*Given a string s and a dictionary of strings wordDict, 
return true if s can be segmented into a space-separated sequence 
of one or more dictionary words.

Note that the same word in the dictionary may be reused multiple times 
in the segmentation.*/
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int len = s.length();
        
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        
        int max_len = 0;
        for (const string& word : wordDict) {
            max_len = max(max_len, (int)word.length());
        }

        vector<bool> dp(len + 1, false);
        dp[0] = true;

        for (int i = 0; i < len; i++) {
            if (!dp[i]) continue;

            string str = "";
            for (int j = i; j < len; j++) {
                str.push_back(s[j]);

                if (str.length() > max_len) break;

                if (dict.count(str)) {
                    dp[j + 1] = true;
                }
            }
        }

        return dp[len];
    }
};

int main() {
    string s;
    cin >> s;

    int size;
    cin >> size;

    vector<string> wordDict(size);

    for (int i = 0; i < size; i++)
    {
        cin >> wordDict[i];
    }

    Solution word;

    bool result = word.wordBreak(s, wordDict);

    cout << boolalpha << result << endl;

    return 0;
}
//run using: 
//g++ word_break.cpp -o word_break.exe
//./word_break