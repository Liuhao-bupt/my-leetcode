class Solution {
public:
    int findComplement(int num) {
        if (num == 0)
            return 1;
        int i = 0;
        int temp = num;
        while (temp) {
            temp >>= 1;
            i++;
        }
        for (int j = 0; j < i; ++j)
            num ^= (1<<j);
        return num;
    }
};
