#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        flip(matrix);
        flip_vert(matrix);
    }

    void flip_vert(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = n/2;
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
    }

    void flip(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i<n; i++) {
            for(int j = i; j<n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
