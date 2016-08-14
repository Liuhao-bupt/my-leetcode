class Solution {
public:
    vector<string> letterCombinations(string digits) {
    	vector<string> result;
        for (auto c : digits)
            if (c == '0' || c == '1')
                return result;
        map<char, vector<string>> mapping{ {'2', { "a", "b", "c" }},
									     {'3', { "d", "e", "f" }},
									     {'4', { "g", "h", "i" }},
									     {'5', { "j", "k", "l" }},
									     {'6', { "m", "n", "o" }},
									     {'7', { "p", "q", "r", "s"}},
									     {'8', { "t", "u", "v" }},
									     {'9', { "w", "x", "y", "z" }} };

	    for (int i = 0; i < digits.size(); ++i)
		    Sol(result, mapping[digits[i]]);
	    return result;
    }
    void Sol(vector<string>& result, vector<string> str) {
	    if (result.empty())
		    result = str;
	    else {
		    vector<string> temp = result;
		    result = {};
		    for (auto s1 : temp)
			    for (auto s2 : str) {
				    string s3 = s1 + s2;
				    result.push_back(s3);
			    }
	    }
    }
};
