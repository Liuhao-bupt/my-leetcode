class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0;
        int right = nums.size() - 1;
        while (true) {
            int pos = partition(nums, left, right);
            if (pos == k - 1)
                return nums[pos];
            else if (pos > k - 1)
                right = pos - 1;
            else
                left = pos + 1;
        }
    }
    int partition(vector<int>& nums, int left, int right) {
        int l = left + 1;
        int r = right;
        while (l <= r) {
            if (nums[l] < nums[left] && nums[r] > nums[left])
                swap(nums[l++], nums[r--]);
            if (nums[l] >= nums[left])
                l++;
            if (nums[r] <= nums[left])
                r--;
        }
        swap(nums[r], nums[left]);
        return r;
    }
};
