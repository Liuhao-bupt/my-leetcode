class NumArray {
public:
    vector<int> result;
    NumArray(vector<int> &nums) {
        result.push_back(0);
        int sum = 0;
        for (auto it : nums) {
            sum += it;
            result.push_back(sum);
        }
    }

    int sumRange(int i, int j) {
        return result[j+1] - result[i];
    }
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);
