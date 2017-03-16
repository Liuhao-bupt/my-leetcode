class Solution {
public:
//created by lh on 2017/3/16
//complexity Time:;Space:
    string longestPalindrome(string s) {
        if (s.size() < 2)
            return s;
        int len = s.size(), max_left = 0, max_len = 1, left, right;
        for (int start = 0; start < len && len-start > max_len/2;){
            left = right = start;
            while (right < len-1 && s[right] == s[right+1])
                right++;
            start = right + 1;
            while (right < len-1 && left > 0 && s[right+1] == s[left-1]){
                right++;
                left---;
            }
            if (right-left+1 > max_len){
                max_left = left;
                max_len = right-left + 1;
            }
        }
        return s.substr(max_left, max_len);
    }
};
