class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if (n == 1 && s != "0")
            return 1;
        if (s.empty() || s[0] == '0')
            return 0;
        vector<int> dp(n);
        dp[0] = 1;
        for (int i = 1; i < n; ++i){
            int k = (s[i-1] - '0')*10 + (s[i]-'0');
            if (k >= 10 && k <= 26)
                dp[i] = (i>=2? dp[i-2]:1);
            if (s[i] != '0')
                dp[i] += dp[i-1];
        }
        return dp.back();
    }
};
