class Solution {
public:
    int mySqrt(int x) {
        int64_t i = 1;
        int64_t j = x;
        while (i <= j) {
            int64_t m = (i + j) >> 1;
            if (m*m == x)
                return m;
            else if (m*m > x || m*m < 0)
                j = m-1;
            else
                i = m+1;
        }
        return j;
    }
};
