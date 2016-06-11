class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int v[32] = {0};
      int res = 0;
      for (int i = 0; i < 32; ++i) {
          for (int j = 0; j < nums.size(); ++j) {
              v[i] += (nums[j] >> i) & 1;
          }
          res |= (v[i] % 3) << i;
      }
      return res;
    }
};
