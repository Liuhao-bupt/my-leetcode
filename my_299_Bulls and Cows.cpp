class Solution {
public:
    string getHint(string secret, string guess) {
        string temp = secret;
        vector<int> Int={};
        int b = 0, c = 0;
        for(int i = 0; i < guess.size(); ++i)
        {
            if(guess[i] == secret[i])
            {
                ++b;
                find_erase(temp,guess[i]);
            }
            else
                Int.push_back(i);
        }
        for(int v = 0; v < Int.size(); ++v){
                if(find_erase(temp,guess[Int[v]]))
                    ++c;
            }
        string str1 = to_string(b)+ "A" + to_string(c) + "B";
        return str1;
    }
    bool find_erase(string &str, char c)
    {
        for(auto it = str.begin(); it != str.end(); ++it)
        {
            if(*it == c){
                str.erase(it);
                return true;}
        }
        return false;
    }
};
