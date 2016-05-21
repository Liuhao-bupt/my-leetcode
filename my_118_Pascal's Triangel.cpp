class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0)
            return {};
        vector<vector<int>> result;
        vector<int> cur;
        for(int i = 0; i < numRows; ++i)
        {
            cur = {};
            cur.push_back(1);
            int j = 1;
            while(cur.size() < i)
                    cur.push_back(result[i-1][j] + result[i-1][j-1]),++j;
            if(cur.size() == i)
                cur.push_back(1);
            result.push_back(cur);
            }
    return result;
    }
};
