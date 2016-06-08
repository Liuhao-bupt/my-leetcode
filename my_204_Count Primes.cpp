class Solution {
public:
    int countPrimes(int n) {
        int result = 0;
        if (n <= 2)
            return result;
        vector<bool> bol(n, true);
        bol[0] = false;
        bol[1] = false;
        for (int i = 2; i <= sqrt(n); ++i) {
            if(bol[i]) {
                for (int j = i * 2; j < n; j = j + i) {
                    bol[j] = false;
                }
            }
        }
        for (int t = 2; t < n; ++t) {
            if(bol[t])
                ++result;
        }
        return result;
    }
};
