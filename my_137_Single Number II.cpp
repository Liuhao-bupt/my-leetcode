class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s = nums.size();
        if (s == 1 || nums[0] < nums[1])
            return nums[0];
        if (nums[s - 1] > nums[s - 2])
            return nums[s - 1];
        auto index = nums.begin() + 1;
        for (; index != nums.end() - 1; ++index) {
            if (*index > *(index - 1) && *index < *(index + 1))
                break;
        }
        return *index;
    }
};
