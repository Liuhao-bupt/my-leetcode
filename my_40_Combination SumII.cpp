class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> out;
        vector<vector<int>> result;
        sort(candidates.begin(), candidates.end());
        Sol(candidates, target, 0, out, result);
        set<vector<int>> tmp;
        tmp.insert(result.begin(), result.end());
        result = {};
        for (auto it : tmp)
            result.push_back(it);
        return result;
    }
    void Sol(vector<int>& candidates, int target, int level, vector<int>& out, vector<vector<int>>& result) {
        int sum = Sum(out);
        if (sum == target) {
            result.push_back(out);
            return;
        }
        if (sum < target) {
            for (int i = level; i < candidates.size(); ++i) {
                if (sum + candidates[i] > target)
                    break;
                out.push_back(candidates[i]);
                Sol(candidates, target, i + 1, out, result);
                out.pop_back();
            }
        }
        else
            return;
    }
    inline int Sum(vector<int>& out) {
        int sum = 0;
        for (int i = 0; i < out.size(); ++i)
            sum += out[i];
        return sum;
    }
};
