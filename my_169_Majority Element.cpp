class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto len=nums.size();
        return(nums[len/2]);
    }
};
