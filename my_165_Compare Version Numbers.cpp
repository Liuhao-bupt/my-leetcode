class Solution {
public:
    int compareVersion(string version1, string version2) {
	vector<string> str1;
	vector<string> str2;
	string temp1 = "";
	string temp2 = "";
	for (auto c : version1) {
		if (c != '.')
			temp1 += c;
		else {
			str1.push_back(temp1);
			temp1 = "";
		}
	}
	str1.push_back(temp1);
	for (auto c : version2) {
		if (c != '.')
			temp2 += c;
		else {
			str2.push_back(temp2);
			temp2 = "";
		}
	}
	str2.push_back(temp2);
	auto b1 = str1.begin();
	auto b2 = str2.begin();
	while (b1 != str1.end() && b2 != str2.end()) {
		if (atoi((*b1).c_str()) < atoi((*b2).c_str()))
			return -1;
		else if (atoi((*b1).c_str()) > atoi((*b2).c_str()))
			return 1;
		else {
			++b1;
			++b2;
		}
	}
	auto d1 = b1;
	auto d2 = b2;
	bool flag1 = true;
	bool flag2 = true;
	if (d1 != str1.end()) {
		for (; d1 != str1.end(); ++d1) {
			if (atoi((*d1).c_str()) != 0) {
				flag1 = false;
				break;
			}
		}
	}
	if (d2 != str2.end()) {
		for (; d2 != str2.end(); ++d2) {
			if (atoi((*d2).c_str()) != 0) {
				flag2 = false;
				break;
			}
		}
	}
	if ((b1 == str1.end() || flag1) && (b2 == str2.end() || flag2))
		return 0;
	else if (b1 == str1.end())
		return -1;
	else 
		return 1;
    }
};
