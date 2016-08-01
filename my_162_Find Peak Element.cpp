class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1 || nums[1] < nums[0])
            return 0;
        int n = nums.size();
        int i = 1;
        while (i + 2 < n) {
            if (nums[i] > nums[i + 1])
                return i;
            if (nums[i + 1] >nums[i + 2])
                return i + 1;
            i += 2;
        }
        if (i == n - 1)
            return i;
        if (i == n - 2 && nums[i] > nums[i + 1])
            return i;
        else
            return i + 1;
    }
};
