class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int i = 0, j = 0;
        int count = 0;
        int m = matrix.size();
        if (m == 0)
            return result;
        int n = matrix[0].size();
        int min_t = min(m, n);
        for (int t = 0; t <= min_t / 2; ++t) {
		    i = j = t;
		    for (int k = j; k < n - j && count < m * n; ++k) {
			    result.push_back(matrix[i][k]);
			    count++;
		    }
		    for (int k = i + 1; k < m - i && count < m * n; ++k) {
			    result.push_back(matrix[k][n - j - 1]);
			    count++;
		    }
		    for (int k = n - j - 2; k >= j && count < m * n; --k) {
			    result.push_back(matrix[m - i - 1][k]);
			    count++;
		    }
		    for (int k = m - i - 2; k > i && count < m * n; --k) {
			    result.push_back(matrix[k][j]);
			    count++;
		    }
        }
        return result;
    }
};
