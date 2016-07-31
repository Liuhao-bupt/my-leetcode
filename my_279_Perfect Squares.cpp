class Solution {
public:
    int numSquares(int n) {
        vector<int> tmp(n + 1, INT_MAX);
        tmp[0] = 0;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j*j <= i; ++j)
                tmp[i] = min(tmp[i], 1+tmp[i-j*j]);
        return tmp[n];
    }
};
