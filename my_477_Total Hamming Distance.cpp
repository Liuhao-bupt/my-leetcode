class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int total = 0;
        int one;
        int len = nums.size();
        for (int i = 0; i< 32; ++i){
            one = 0;
            for (int j : nums)
                one += (j>>i) & 1;
            total += one * (len-one);
        }
        return total;
    }
};
