class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> result(n, INT_MAX);
        int k = primes.size();
        vector<int> index(k, 0);
        result[0] = 1;
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < k; ++j)
                result[i] = min(result[i], result[index[j]] * primes[j]);
            for (int j = 0; j < k; ++j) {
                if (result[index[j]] * primes[j] == result[i])
                    ++index[j];
            }
        }
        return result[n - 1];
    }
};
