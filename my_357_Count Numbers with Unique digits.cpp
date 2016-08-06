class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0)
            return 1;
        int res = 0;
        for (int i = n; i > 0; --i)
            res += Sol(i);
        return res;
    }
    int Sol(int n) {
        if (n == 1)
            return 10;
        int result = 9;
        for (int i = 9; i >= 11-n; --i)
            result *= i;
        return result;
    }
};
