class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> out;
        vector<vector<int>> result;
        set<vector<int>> res;
        for (int k = 0; k <= nums.size(); ++k)
            Sol(nums, k, 0, out, result);
        res.insert(result.begin(), result.end());
        result.clear();
        for (auto it : res)
            result.push_back(it);
        return result;
    }
    void Sol(vector<int>& nums, int k, int level, vector<int>& out, vector<vector<int>>& result) {
        if (out.size() == k) {
            result.push_back(out);
            return;
        }
        if (out.size() < k)
            for (int i = level; i < nums.size(); ++i) {
                out.push_back(nums[i]);
                Sol(nums,k,i + 1, out, result);
                out.pop_back();
            }
        else
            return;
    }
};
