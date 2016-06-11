class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res(2);
        int temp = 0;
        for (int i = 0; i < nums.size(); ++i) {
            temp ^= nums[i];
        }
        int j = 0;
        for (; j < 32; ++j) {
            if ((temp & (1 << j)) == (1 << j))
                break;
        }
        for (int k = 0; k < nums.size(); ++k) {
            if ((nums[k] & (1 << j)) == (1 << j))
                res[0] ^= nums[k];
            else
                res[1] ^= nums[k];
        }
        return res;
    }
};
