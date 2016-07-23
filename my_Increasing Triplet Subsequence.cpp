class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> res;
        for (auto b = nums.begin(); b != nums.end(); ++b) {
            auto iter = lower_bound(res.begin(), res.end(), *b);
            if (iter == res.end()) {
                res.push_back(*b);
                if (res.size() == 3)
                    return true;
            }
            else
                *iter = *b;
        }
        return false;
    }
};
