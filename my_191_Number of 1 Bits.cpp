class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum;
        while(n != 0){
            sum += n % 2;
            n = n / 2;
        }
        return sum;
    }
};
