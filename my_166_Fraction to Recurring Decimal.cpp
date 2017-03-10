class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        string res = "";
        string cur = "";
        int64_t a = numerator;
        int64_t b = denominator;
        if (a % b == 0)
            return to_string(a/b);
        if (a * b < 0)
            res += '-';
        a = abs(a);
        b = abs(b);
        res += to_string(a/b);
        res += '.';
        a %= b;
        map<int,int> imp;
        int i = 0;
        while (a != 0){
            if (imp[a] != 0)
                break;
            imp[a] = ++i;
            cur += to_string((10*a)/b);
            a = (10*a) % b;
        }
        if (a == 0)
            res += cur;
        else{
            int j = imp[a]-1;
            string pre = cur.substr(0,j);
            cur = cur.substr(j,i-j);
            res = res + pre + '(' + cur + ')';
        }
        return res;
    }
};
