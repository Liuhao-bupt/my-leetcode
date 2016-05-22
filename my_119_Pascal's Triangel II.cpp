class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex < 0)
            return {};
        vector<vector<int>> result;
        for(int i = 0; i <= rowIndex; ++i)
        {
            vector<int> cur(i+1,1);
            for(int j = 1; j < i; ++j)
                cur[j] = result[i-1][j] + result[i-1][j-1];
            result.push_back(cur);
        }
        return result[result.size() - 1];
    }
};
