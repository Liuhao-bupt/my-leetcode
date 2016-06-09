class Solution {
public:
    int reverse(int x) {
        int y = (x > 0? x : -x);
        int len = 0, z;
        long long int res = 0;
        int temp = y;
        while(temp != 0) {
            ++len;
            temp = temp/10;}
        --len;
    	while (y != 0) {
		z = y % 10;
		res += z * pow(10, len--);
		y = y / 10;
	}
	if (res <= INT_MAX && res > 0)
	    return (x > 0? res : -res);
	else 
	    return 0;
    }
};
