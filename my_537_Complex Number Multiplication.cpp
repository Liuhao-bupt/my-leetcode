class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        string s1, s2;
        int a1, a2, b1, b2;
        for(char c : a){
            if (c == '+'){
                a1 = atoi(s1.c_str());
                s1 = "";
            }
            else if (c == 'i')
                a2 = atoi(s1.c_str());
            else
                s1 += c;
        }
        for(char c : b){
            if (c == '+'){
                b1 = atoi(s2.c_str());
                s2 = "";
            }
            else if (c == 'i')
                b2 = atoi(s2.c_str());
            else
                s2 += c;
        }
        int r1 = a1*b1-a2*b2;
        int r2 = a1*b2+a2*b1;
        string res = to_string(r1) + '+' + to_string(r2) + 'i';
        return res;
    }
        
};
