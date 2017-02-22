class Solution {
public:
    int calculate(string s) {
        stack<int> num;
        stack<char> cal;
        string left="";
        for (int i = 0; i < s.size(); ){
            char it = s[i];
           	if (it == ' ')
			    ++i;
		    else if (it >= '0' && it <= '9') {
			    left += it;
			    ++i;
		    }
		    else {
		        if (left != "")
		            num.push(atoi(left.c_str()));
			    left = "";
			    if (cal.empty()) {
				    cal.push(it);
				    i++;
			    }
			    else {
				    if ((it == '*' || it == '/') && (cal.top() == '+' || cal.top() == '-')) {
					    cal.push(it);
					    i++;
				    }
				    else
					    num.push(jisuan(num, cal));
			    }
		    }
        }
	    if (left != "")
		    num.push(atoi(left.c_str()));
	    while (!cal.empty())
		    num.push(jisuan(num, cal));
	    int ans = num.top();
	    num.pop();
	    return ans;
    }
    int jisuan(stack<int> &num, stack<char> &cal) {
        if (cal.empty()){
            int k = num.top();
            num.pop();
            return k;
        }
        int res = 0;
        int first = num.top();
        num.pop();
        int second = num.top();
        num.pop();
        char fu = cal.top();
        cal.pop();
        if (fu == '+')
            res = (first + second);
        else if (fu == '-')
            res = (second - first);
        else if (fu == '*')
            res = (second * first);
        else
            res = (second / first);
        return res;
    }
};
