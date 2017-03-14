class Solution {
public:
    string smallestGoodBase(string n) {
 	    unsigned long long t = stoull(n);
	    int m = log(t+1) / log(2) - 1;
	    while (m >= 2) {
	        unsigned long long left = 2;
	        unsigned long long right = ceil(pow(t,1.0/m));
		    while (right >= left) {
			    unsigned long long mid = (right + left) >> 1;
			    string temp = calculate(mid, m, t);
 			    if (temp == "0")
				    return to_string(mid);
			    else if (temp == "1")
				    right = mid - 1;
			    else
				    left = mid + 1;
		    }
		    m--;
	    }
	return to_string(t - 1);
    }
    string calculate(unsigned long long base, int k,unsigned long long t) {
	    int i = 1;
	    unsigned long long ans = 1;
	    unsigned long long cur = 1;
	    while (i <= k){
	        cur *= base;
	    	ans += cur;
	    	if (ans > t)
	    	    return "1";
	    	i++;
	    }
	    if (ans == t)
	        return "0";
	    if (ans < t)
	        return "-1";
}
};
