class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> out;
        Sol(nums, out, res);
        vector<vector<int>> result;
        for (auto c : res) {
            if (isunique(c))
                result.push_back(c);
        }
        return result;
    }
    void Sol(vector<int>& nums, vector<int>& out, vector<vector<int>>& res) {
        if(out.size() == nums.size()) {
            res.push_back(out);
            return;
        }
        if (out.size() < nums.size()) {
            for (int i = 0; i < nums.size(); ++i) {
                out.push_back(nums[i]);
                Sol(nums, out, res);
                out.pop_back();
            }
        }
    }
    bool isunique(vector<int> nums) {
        set<int> temp(nums.begin(), nums.end());
        return temp.size() == nums.size();
    }
};
