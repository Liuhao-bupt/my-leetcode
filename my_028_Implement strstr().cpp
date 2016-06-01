class Solution {
public:
    int strStr(string haystack, string needle) {
        int pre, i, j;
        pre = i = j = 0;
        while(i < haystack.size() && j < needle.size())
        {
            if (haystack[i] == needle[j]){
                ++i; 
                ++j;}
            else{
                j = 0;
                i = ++pre;}
        }
        if(j == needle.size())
            return pre;
        else
            return -1;
    }
};
