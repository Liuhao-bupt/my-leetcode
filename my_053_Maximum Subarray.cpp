class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int nsize = nums.size();
	    for (int i = nsize - 2; i >= 0; --i)
		    nums[i] += nums[i + 1];
		int maxSub = nums[nums.size() - 1];
	    int mint = nums[nums.size() - 1];
	    for (int j = nums.size() - 2; j >= 0; --j) {
		    int temp = max(nums[j], nums[j] - mint);
		    maxSub = max(temp, maxSub);
		    mint = (nums[j] < mint ? nums[j] : mint);
	    }
	return maxSub;
    }
};
