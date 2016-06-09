class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int size = nums.size();
    vector<int> numtemp = nums;
    for (int i = 0; i < size; ++i) {
        nums[(i + k) % size] = numtemp[i];
    }
    }
};
