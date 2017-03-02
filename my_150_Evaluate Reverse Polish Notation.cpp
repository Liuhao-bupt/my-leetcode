class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (string it : tokens)
            if (it != "*" && it != "/" && it != "+" && it != "-")
                s.push(atoi(it.c_str()));
            else
                calculate(s, it);
        return s.top();
    }
    void calculate(stack<int> &s, string op) {
        int first = s.top();
        s.pop();
        int second = s.top();
        s.pop();
        int ans;
        if (op == "*")
            ans = first*second;
        else if (op == "/")
            ans = second / first;
        else if (op == "+")
            ans = second + first;
        else
            ans = second - first;
        s.push(ans);
    }
};
