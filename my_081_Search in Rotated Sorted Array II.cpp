class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left < right) {
            int mid = (left + right) >> 1;
            if (nums[mid] < nums[right])
                right = mid;
            else
                left = mid + 1;
        }
        int r;
        auto l = nums.begin() + left;
	    auto i = find(nums.begin(), l, target);
		i = (i == l ? find(l, nums.end(), target) : i); 
		r = i - nums.begin();
		return (r == nums.size() ? false : true);
    }
};
