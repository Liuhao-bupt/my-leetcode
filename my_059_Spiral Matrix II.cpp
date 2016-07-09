class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n));
        int start = 0;
        int end = n * n;
        for (int i = 0; i < n / 2; ++i) {
            for (int j = i; j < n - i && start < end; ++j)
                result[i][j] = ++start;
            for (int j = i + 1; j < n - i && start < end; ++j)
                result[j][n - i - 1] = ++start;
            for (int j = n - i - 2; j >= i && start < end; --j)
                result[n - i - 1][j] = ++start;
            for (int j = n - i - 2; j > i && start < end; --j)
                result[j][i] = ++start;
        }
        if (n % 2 != 0)
            result[n / 2][n / 2] = end;
        return result;
    }
};
