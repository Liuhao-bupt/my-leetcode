class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> out;
        vector<vector<int>> result;
        sort(candidates.begin(), candidates.end());
        Sol(candidates, 0, target, result, out);
        return result;
    }
    void Sol(vector<int>& candidates, int level, int target, vector<vector<int>>& result, vector<int>& out) {
        int sum = Sum(out);
        if (sum == target) {
            result.push_back(out);
            return;
        }
        if (sum < target) {
            for (int i = level; i < candidates.size(); ++i) {
                if (Sum(out) + candidates[i] > target)
                    break;
                out.push_back(candidates[i]);
                Sol(candidates, i, target, result, out);
                out.pop_back();
            }
        }
        else
            return;
    }
    inline int Sum(vector<int> out) {
        int res = 0;
        for (int i = 0; i < out.size(); ++i)
            res += out[i];
        return res;
    }
};
