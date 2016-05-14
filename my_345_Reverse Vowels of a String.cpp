class Solution {
public:
    string reverseVowels(string s) {
        if(s.empty())
            return {};
        string str = {};
        vector<int> Int;
        for (string::size_type index = 0; index != s.size(); ++index){
            if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U' || s[index] == 'u'){
                str += 'a';
                Int.push_back(index);}
            else
                str += s[index];
            }
        string::size_type ind = 1;
        for (auto it = 0; it!=str.size(); ++it){
            if (str[it] == 'a'){
                str[it] = s[Int[Int.size()-ind]];
                ++ind;}
        }
        return str;
    }
};
