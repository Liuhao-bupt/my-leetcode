class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> out;
        vector<vector<int>> result;
        Sol(n, k, 1, out, result);
        return result;
    }
    void Sol(int n, int k, int level, vector<int> &out, vector<vector<int>> &result) {
        if (out.size() == k) {
            result.push_back(out);
            return;
        }
        for (int i = level; i <= n; ++i) {
            out.push_back(i);
            Sol(n, k, i + 1, out, result);
            out.pop_back();
        }
    }
};
