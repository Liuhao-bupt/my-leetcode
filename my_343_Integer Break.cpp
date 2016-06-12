class Solution {
public:
    int integerBreak(int n) {
        int result = 1;
        if (n == 2)
            return 1;
        if (n == 3)
            return 2;
        if (n == 4)
            return 4;     
        while (n != 0 && n != 2 && n != 4) {
            result *= 3;
            n = n - 3;
        }
        if (n != 0)
            result *= n;
        return result;
    }
};
