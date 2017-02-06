class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int cur = 0;
        for (int i : nums) {
            if (i == 1)
                cur++;
            else{
                max = (max > cur ? max : cur);
                cur = 0;
            }
        }
        max = (max > cur ? max : cur);
        return max;
    }
};
