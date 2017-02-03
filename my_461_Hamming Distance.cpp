class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x^y;
        int num = 0;
        while(z) {
            z &= (z-1);
            num++;
        }
        return num;
    }

};
