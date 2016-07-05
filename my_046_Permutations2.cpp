class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        Sol(nums, res, 0);
        return res;
    }
    void Sol(vector<int>& nums, vector<vector<int>>& res, int level) {
        if (level >= nums.size()) {
            res.push_back(nums);
            return;
        }
        for (int i = level; i < nums.size(); ++i) {
            swap(nums[i], nums[level]);
            Sol(nums, res, level + 1);
            swap(nums[i], nums[level]);
        }
    }
};
