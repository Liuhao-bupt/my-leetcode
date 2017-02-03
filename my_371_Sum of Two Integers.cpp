class Solution {
public:
    int getSum(int a, int b) {
        int temp = 0;
        int res = 0;
        for(int i = 0; i < 32; ++i) {
            int ai = (a>>i) & 1;
            int bi = (b>>i) & 1;
            if (ai == 0 && bi == 0 && temp == 0) {
               //res &= ~(1 << i);
               temp = 0;}
            else if (ai == 0 && bi == 0 && temp == 1){
               res |= (1 << i);
               temp = 0;}
            else if (ai == 1 && bi == 1 && temp == 0){
               //res &= ~(1 << i);
               temp = 1;}
            else if (ai == 1 && bi == 1 && temp == 1){
               res |= (1 << i);
               temp = 1;}
            else if ((ai == 1 && bi == 0 && temp == 0) || (ai == 0 && bi == 1 && temp == 0)){
               res |= (1 << i);
               temp = 0;}
            else if ((ai == 1 && bi == 0 && temp == 1) || (ai == 0 && bi == 1 && temp == 1)) {
               //res &= ~(1 << i);
               temp = 1;}
        }
        return res;
    }
};
