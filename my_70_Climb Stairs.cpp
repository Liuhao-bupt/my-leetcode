class Solution {
public:
    int climbStairs(int n) {
        int a[100] = {0,1,2};
        for(int i = 3;i<100;i++)
            a[i]=a[i-1]+a[i-2];
        return a[n];
    }
};
