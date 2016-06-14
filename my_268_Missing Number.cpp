class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumn = 0;
        int s = nums.size();
        for (auto c : nums)
            sumn += c;
        return (s * (s + 1)) / 2 - sumn;
    }
};
