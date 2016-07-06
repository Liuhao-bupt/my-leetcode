class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        int s = input.size();
        vector<int> res;
        for (int i = 0; i < s; ++i) {
            if (input[i] == '+' || input[i] == '-' || input[i] == '*') {
                vector<int> res1 = diffWaysToCompute(input.substr(0, i));
                vector<int> res2 = diffWaysToCompute(input.substr(i + 1));
                for (auto c1 : res1) {
                    for (auto c2 : res2) {
                        if (input[i] == '+')
                            res.push_back(c1 + c2);
                        else if (input[i] == '-')
                            res.push_back(c1 - c2);
                        else
                            res.push_back(c1 * c2);
                    }
                }
            }
        }
        if (res.empty())
            res.push_back(stoi(input));
        return res;
    }
};
