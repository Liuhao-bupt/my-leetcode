class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums[0] < nums[1] || nums.size() == 1)
            return nums[0];
        if (nums[nums.size() - 1] > nums[nums.size() - 2])
            return nums[nums.size() - 1];
        auto c = nums.begin() + 1;
        for (; c != nums.end() - 1; ++c) {
            if (*c > *(c - 1) && *c < *(c + 1))
                break;
        }
        return *c;
    }
};
