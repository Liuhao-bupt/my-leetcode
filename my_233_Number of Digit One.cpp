class Solution {
public:
    int countDigitOne(int n) {
        if (n <= 0)
            return 0;
        int res = 0;
        int64_t ifactor = 1;
        int lownumber, curnumber, highnumber;
        while (n / ifactor != 0) {
            lownumber = n - (n/ifactor)*ifactor;
            curnumber = (n / ifactor) % 10;
            highnumber = n / (ifactor * 10);
            if (curnumber == 0)
                res += highnumber * ifactor;
            else if (curnumber == 1)
                res += highnumber * ifactor + lownumber + 1;
            else
                res += (highnumber + 1) *  ifactor;
            ifactor *= 10;
        }
        return res;
    }
};
