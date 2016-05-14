class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return nums[0];
        vector<int> Int2;
        int result=nums[0],maxprepre=0;
        Int2.push_back(nums[0]);
        vector<int>::size_type index = 1;
        for(; index != nums.size(); ++index){
            result = womax(result,maxprepre+nums[index]);
            Int2.push_back(result);
            maxprepre = womax(maxprepre,Int2[index-1]);
        }
        return result;
    }
    int womax(int x,int y){
        return (x > y ? x : y);
    }
};
