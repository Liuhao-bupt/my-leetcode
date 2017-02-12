class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        unsigned long long p = n;
        if (n < 0) {
            x = 1/x;
            p = -n;
        }
        while (p) {
            if (p & 1 == 1)
                res *= x;
            x *= x;
            p >>= 1;
        }
        return res;
    }
};
