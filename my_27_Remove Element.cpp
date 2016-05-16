class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(auto index = 0; index != nums.size(); ++index){
            if (nums[index] != val)
                nums[count++] = nums[index];
        }
        return count;
    }
};
