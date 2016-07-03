class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res{0};
        for (int i = 0; i < n; ++i) {
            int j = (1 << i);
            for (int k = (res.size() - 1); k >= 0; --k)
                res.push_back(res[k] + j);
            }
        return res;
    }
};
