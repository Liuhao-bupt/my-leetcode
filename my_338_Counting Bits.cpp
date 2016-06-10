class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        res.push_back(0);
        int i = 1, n = 0;
        for (; i <= num; ++i) {
            if (i == pow(2, n)) {
                res.push_back(1);
                ++n;}
            else {
                int j = i - pow(2, n - 1);
                res.push_back(res[j] + 1);
            }
        }
    return res;
    }
};
