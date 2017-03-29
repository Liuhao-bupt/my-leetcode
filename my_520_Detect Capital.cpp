class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() <= 1)
            return true;
        bool pre = islower(word[0]);//iscaptial
        for(int i = 1; i < word.size();i++){
            bool cur = islower(word[i]);
            if(pre && !cur)
                return false;
            if (!pre && cur && i != 1)
                return false;
            pre = cur;
        }
        return true;
    }
};
