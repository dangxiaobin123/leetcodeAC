#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // sort(intervals.begin(), intervals.end(), [&](const vector<int>& a, const vector<int>& b){
        //     return (a[1] < b[1]) || (a[1] == b[1] && a[0] < b[0]);
        // });
        // int count = 1, end = intervals[0][1];
        // for (auto &e : intervals) {
        //     if (end < e[0]) {
        //         count++;
        //         end = e[1];
        //     }
        // }
        // return intervals.size() - count;
        sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0] || (a[0] == b[0] && (a[1] < b[1]));
        });
        vector<int> tail;
        for (auto &e : intervals) {
            auto it = lower_bound(tail.begin(), tail.end(), e[0]);
            if (it == tail.end()) tail.push_back(e[1]);
            else if (*it > e[1]) *it = e[1];
        }
        return intervals.size() - tail.size();
    }
};
