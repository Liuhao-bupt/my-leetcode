class Solution {
public:
    int calculate(string s) {
        stack<int> num;
        stack<char> cal;
        int d = 0;
        for (int i = 0; i < s.size();i++){
            char it = s[i];
		    if (it >= '0' && it <= '9')
			    d = d*10 + (it-'0');
		    if (it == '+' || it == '-' || it == '*' || it == '/' || i == s.size()-1) {
		        num.push(d);
		        if (i == s.size() - 1)
		            break;
			    d = 0;
				if ((it == '*' || it == '/') && !cal.empty() && (cal.top() == '+' || cal.top() == '-'))
				    cal.push(it);
				else {
				    while(!cal.empty() && !((it == '*' || it == '/') && (cal.top() == '+' || cal.top() == '-')))
				        num.push(jisuan(num, cal));
				    cal.push(it);}
		    }
        }
	    while (!cal.empty())
		    num.push(jisuan(num, cal));
        return num.top();
    }
    int jisuan(stack<int> &num, stack<char> &cal) {
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
