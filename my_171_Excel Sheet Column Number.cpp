class Solution {
public:
    int titleToNumber(string s) {
	int num=0;
	int len = s.size();
	for (int i = 0; i < len; i++)
		num = num + ((int)s[i] - 64)*pow(26, len - i - 1);
	return num;
    }
};
