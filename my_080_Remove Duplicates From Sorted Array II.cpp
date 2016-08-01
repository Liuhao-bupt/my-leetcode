class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int result = 0;
        int count = 1;
        int n = nums.size();
        if (nums.empty())
            return 0;
        for (int i = 1; i < n; ++i) {
            if (nums[result] == nums[i] && count < 2) {
                nums[++result] = nums[i];
                ++count;
            }
            if (nums[result] != nums[i]) {
                nums[++result] = nums[i];
                count = 1;
            }
        }
        return result + 1;
    }
};
