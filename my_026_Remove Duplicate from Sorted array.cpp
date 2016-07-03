class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.begin() == nums.end())
            return 0;
        int result = 1;
        for(auto i = nums.begin() + 1; i != nums.end(); ++i)
        {
            if (*i == *(i - 1))
                nums.erase(i), --i;
            else
                ++result;
        }
        return result;
    }
};
