class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> out;
        for (int k = 0; k <= nums.size(); ++k)
            Sol(k, 0, nums, out, res);
        return res;
    }
    void Sol(int k, int level, vector<int>& nums, vector<int>& out, vector<vector<int>>& res) {
        if (out.size() == k) {
            res.push_back(out);
            return;
        }
        for (int i = level; i < nums.size(); ++i) {
            out.push_back(nums[i]);
            Sol(k, i+1, nums, out, res);
            out.pop_back();
        }
    }
};
