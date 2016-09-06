class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        int len = 1;
        int tmp = n;
        while (tmp / 10 != 0) {
            tmp /= 10;
            ++len;
        }
        int count = 0;
        for (int i = 0; i < len; ++i) {
            res.push_back(pow(10, i));
            ++count;
        }
        int k = pow(10, len - 1), t = 0;
        while (count < n) {
            ++k, ++t;
            if (k <= n) {
                res.push_back(k);
                ++count;
            }
            else {
                k = k + 9 - t;
                t = 9;
            }
            if (t == 9 && count < n) {
                int j = Sol(k + 1);
                while (j <= n){
                    res.push_back(j);
                    ++count;
                    j *= 10;
                }
                ++k;
                t = 0;
            }
        }
        return res;
    }
    int Sol(int n) {
        while (n % 10 == 0)
            n /= 10;
        return n;
    }
};
