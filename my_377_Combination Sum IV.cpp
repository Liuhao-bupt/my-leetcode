class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> res(target + 1, 0);
        for (int i = 1; i < target + 1; ++i) {
            for (int num : nums) {
                if (num == i)
                    res[i] += 1;
                if (num < i)
                    res[i] += res[i - num];
            }
        }
        return res[target];
    }
};
