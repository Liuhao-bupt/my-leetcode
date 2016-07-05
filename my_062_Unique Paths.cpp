class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> cache(m + 1, vector<int>(n + 1));
        return Sol(m , n, cache);
    }
    int Sol(int m, int n, vector<vector<int>> &cache) {
        if (m == 1 || n == 1)
            return 1;
        if (cache[m][n] != 0)
            return cache[m][n];
        cache[m][n] = Sol(m - 1, n, cache) + Sol(m, n - 1, cache);
        return cache[m][n];
    }
};
