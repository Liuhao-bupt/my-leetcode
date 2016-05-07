class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        auto b=nums.begin();
        auto e=nums.end();
        if(b==e)
            return false;
        auto i=e+1;
        for(auto i=b+1;i!=e;i++){
            for(auto j=b;j<i;j++){
                if(*i==*j)
                    return true;
            }
        }
        return false;
    }
};
