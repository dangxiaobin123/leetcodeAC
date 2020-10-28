#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
    unordered_set<string> dic;
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> isValid(n+1, false);
        isValid[0] = true;
        for (int i = 1; i <= n; i++) {
            for (string &word : wordDict) {
                int len = word.size();
                if (i >= len && isValid[i-len] && s.substr(i-len, len) == word) 
                    isValid[i] = true; break;
            }
        }
        if (!isValid[n]) return {};
        vector<string> res;
        for (auto &word : wordDict) dic.insert(word);
        dfs(res, s, "");
        return res;
    }

    void dfs(vector<string>& res, string s, string ans) {
        if (s.empty()) {
            res.push_back(ans);
            return;
        }
        for (int i = 1; i < s.size(); i++) {
            string temp = s.substr(0, i);
            if (dic.count(temp)) {
                ans += " "+temp;
                dfs(res, s.substr(i), ans);
            }
        }
    }
};
