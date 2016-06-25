class Solution {
public:
    int numTrees(int n) {
        vector<int> result;
        result.push_back(1);
        for (int i = 1; i <= n; ++i) {
            result.push_back(0);
            if (i < 3)
                result[i] = i;
            else {
                for (int j = 1; j <= i; ++j) 
                    result[i] += result[j - 1] * result[i - j];
            }
        }
        return result[n];
    }
};
