#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n/2; i++)
        {
            for (int j = i; j<n-i-1; j++) {
                swap(matrix[i][j], matrix[n-j-1][i]);
                swap(matrix[n-j-1][i], matrix[n-i-1][n-j-1]);
                swap(matrix[n-i-1][n-j-1], matrix[j][n-i-1]);
            }
        }
        
        // flip(matrix);
        // flip_vert(matrix);
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
