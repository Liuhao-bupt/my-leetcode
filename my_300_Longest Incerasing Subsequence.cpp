class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            auto iter = lower_bound(res.begin(), res.end(), *it);
            if (iter == res.end())
                res.push_back(*it);
            else
                *iter = *it;
        }
        return res.size();
    }
};
