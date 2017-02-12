class Solution {
public:
    int findNthDigit(int n) {
        int wei = 1;
        long long start = 10;
        while ( n >= start){
            ++wei;
            start += (pow(10,wei)-pow(10,wei-1))*wei;
        }
        start -= (pow(10,wei)-pow(10,wei-1))*wei;
        int kai = pow(10, wei-1);
        int i = (n - start) / wei + kai;
        int j = (n - start) % wei;
        j = wei-1-j;
        int k = 0;
        while (k < j) {
            i /= 10;
            ++k;
        }
        return i % 10;
    }
};
