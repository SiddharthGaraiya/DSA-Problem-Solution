class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> directions = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

        vector<vector<int>> result(m, vector<int>(n, -1));
        queue<pair<int, int>> q;

        // Optimization 1: Iterate only over cells with 0s initially
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    result[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        // Optimization 2: Avoid redundant neighbor checks

        while (!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();
            int i = p.first;
            int j = p.second;

            for (auto& dir : directions) {
                int new_i = i + dir[0];
                int new_j = j + dir[1];

                if (new_i >= 0 && new_i < m && new_j >= 0 && new_j < n && result[new_i][new_j] == -1 ) {
                    result[new_i][new_j] = result[i][j] + 1;
                    q.push({new_i, new_j});
                }
            }
        }

        return result;
    }
};
