#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        if (words.size() < 2) return {};
        vector<vector<int>> res;
        unordered_map<string, int> hash;
        
        for (int i = 0; i < words.size(); i++) {
            hash[words[i]] = i;
        }

        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            for (int k = 0; k <= s.size(); k++) {
                string left = s.substr(0, k);
                string right = s.substr(k);

                if (isPalindome(right)) {
                    string leftRev = strReverse(left);
                    if (hash.count(leftRev) && i != hash[leftRev]) {
                        res.push_back({i, hash[leftRev]});
                    }
                }

                if (!left.empty() && isPalindome(left)) {
                    string rightRev = strReverse(right);
                    if (hash.count(rightRev) && i != hash[rightRev]) {
                        res.push_back({hash[rightRev], i});
                    }
                }
            }
        }

        return res;
    }

    bool isPalindome(string s) {
        for (int i = 0, j = s.size()-1; i < j; i++, j--) {
            if (s[i] != s[j]) return false;
        }
        return true;
    }

    string strReverse(string& s) {
        string res = s;
        for (int i = 0, j = res.size()-1; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
        return res;
    }
};
