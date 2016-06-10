class Solution {
public:
    int myAtoi(string str) {
    long long int result = 0;
	vector<char> v;
	bool flag = false;
	auto c = str.begin();
	for (; c != str.end(); ++c) {
		if (*c != ' ')
			break;
		}
	if (*c == '-') {
		flag = true;
		++c;
	}
	else if (*c == '+') 
		++c;
	else if (*c > '9' || *c < '0')
		return 0;
	for (; c != str.end(); ++c) {
		if (*c >= '0' && *c <= '9')
			v.push_back(*c);
		else
			break;
		}
	int size = v.size();
	for (auto it : v)
		result += (it - 48) * pow(10, --size);
	if (result < 0)
	    return flag ? INT_MIN : INT_MAX;
	if (flag)
		result = -result;
	if(result > 0)
	    result = (result > INT_MAX ? INT_MAX : result);
	if(result < 0)
		result = (result < INT_MIN ? INT_MIN : result);
	return result;
    }
};
