class Solution {
public:
    bool isAnagram(string s, string t) {
	int s1[26] = {}, t1[26] = {};
	for (auto it : s) {
		int num = (int)it;
		s1[num - 97]++;
	}
	for (auto it : t) {
		int num = (int)it;
		t1[num - 97]++;
	}
	int i = 0;
	while (i<26) {
		if (t1[i] != s1[i]) {
			return false;
		}
		i++;
	}
	return true;
    }
};
