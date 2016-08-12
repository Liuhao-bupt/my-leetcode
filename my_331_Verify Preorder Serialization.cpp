class Solution {
public:
    bool isValidSerialization(string preorder) {
	string tmp;
	int diff = 1;
	int i = 0;
	while (i < preorder.size()) {
		--diff;
		if (diff < 0)
			return false;
		tmp += preorder[i++];
		for (; preorder[i] != ',' && i < preorder.size(); ++i)
			tmp += preorder[i];
		if (tmp != "#")
			diff += 2;
		tmp = "";
		++i;
	}
     return diff == 0;
    }
};
