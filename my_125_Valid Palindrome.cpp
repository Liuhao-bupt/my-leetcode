class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for (auto c : s) {
		if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			res += c;
	}
	for (auto &a : res) {
		if (a >= 'a' && a <= 'z')
			a = toupper(a);
	}
	return ispalind(res);
    }

    bool ispalind(string s) {
        for (int  i = 0; i < (s.size()/2); ++i) {
            if (s[i] != s[s.size()-1-i])
                return false;
        }
        return true;
    }
};
