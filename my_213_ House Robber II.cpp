class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        if (nums.size() < 4)
            return *(max_element(nums.begin(), nums.end()));
        vector<int> tmp1(nums.begin() + 1, nums.end());
        int max1 = Sol(tmp1);
        vector<int> tmp2(nums.begin() + 2, nums.end() - 1);
        int max2 = nums[0] + Sol(tmp2);
        return max(max1, max2);
            
    }
    int Sol(vector<int>& nums) {
        vector<int> tmp;
        tmp.push_back(nums[0]);
        int r = nums[0];
        int maxpre = 0;
        for (int i = 1; i < nums.size(); ++i) {
            r = max(maxpre + nums[i], r);
            tmp.push_back(r);
            maxpre = tmp[i - 1];
        }
        return r;
    }
};
