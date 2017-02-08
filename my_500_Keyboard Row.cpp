class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int> row;
        vector<string> res;
        vector<char> r1 {'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
        vector<char> r2 {'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
        vector<char> r3 {'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};
        for (char i : r1)
            row[i] = 1;
        for (char i : r2)
            row[i] = 2;
        for (char i : r3)
            row[i] = 4;
        for (string str : words) {
            int k = row[str[0]];
            for (char j : str){
                k &= row[j];
                if (k == 0)
                    break;
            }
            if (k != 0)
                res.push_back(str);
        }
        return res;
    }
};
