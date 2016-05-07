class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto b=nums.begin();
        auto e=nums.end();
        if(b==e)
            return false;
        for(auto c=b;c!=e-1;c++){
            if(*c==*(c+1))
                return true;
        }
        return false;
    }
};
