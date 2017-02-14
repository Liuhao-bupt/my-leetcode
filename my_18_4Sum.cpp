class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        if (n < 4)
            return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < n-3; ++i) {
            if (i > 0 && nums[i] == nums[i-1])
                continue;
            if (nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target)
                break;
            if (nums[i] + nums[n-3] + nums[n-2] + nums[n-1] < target)
                continue;
            for (int j = i+1; j < n-2; j++) {
                if (j > i + 1 && nums[j] == nums[j-1])
                    continue;
                if (nums[i] + nums[j] + nums[j+1] + nums[j+2] > target)
                    break;
                if (nums[i] + nums[j] + nums[n-2] + nums[n-1] < target)
                    continue;
                int left = j + 1;
                int right = n-1;
                while (left < right) {
                    vector<int> cur;
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum < target)
                        left++;
                    else if (sum > target)
                        right--;
                    else {
                        cur.push_back(nums[i]);
                        cur.push_back(nums[j]);
                        cur.push_back(nums[left]);
                        cur.push_back(nums[right]);
                        res.push_back(cur);
                        while (nums[left] == nums[left+1] && left < right)
                            left++;
                        while (nums[right] == nums[right-1] && left < right)
                            right--;
                        left++;
                        right--;
                    }
                }
            }
        }
        return res; 
    }
};
