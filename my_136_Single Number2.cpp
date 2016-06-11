class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (auto index = 0; index != nums.size(); ++index) {
            res ^=  nums[index];
        }
        return res;
    }
};
